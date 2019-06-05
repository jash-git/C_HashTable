#include <stdio.h>
#include <stdlib.h>

#include "HashTable.h"

// 出處 https://blog.csdn.net/smstong/article/details/51145786
// 要放入哈希表中的结构体
struct Student
{
    int age;
    float score;
    char name[32];
    char data[1024 * 1024* 10];
};

// 结构体内存释放函数
static void free_student(void* stu)
{
    free(stu);
}

// 显示学生信息的函数
static void show_student(struct Student* p)
{
    printf("name:%s, age:%d, credit:%.2f\n", p->name, p->age, p->score);
}

void pause()
{
    printf("Press Enter key to continue…");
    fgetc(stdin);
}

int main()
{
    // 新建一个HashTable实例
    HashTable* ht = hash_table_new();
    if (NULL == ht) {
        return -1;
    }

    // 向哈希表中加入多个学生结构体
    int i=0;
    for (i = 0; i < 100; i++)
    {
        struct Student * stu = (struct Student*)malloc(sizeof(struct Student));
        stu->age = 18 + rand()%5;
        stu->score = 50.0f + rand() % 100;
        sprintf(stu->name, "Classmate%d", i);
        hash_table_put2(ht, stu->name, stu, free_student);
    }

    // 根据学生姓名查找学生结构
    for (i = 0; i < 100; i++)
    {
        char name[32];
        sprintf(name, "Classmate%d", i);
        struct Student * stu = (struct Student*)hash_table_get(ht, name);
        show_student(stu);
    }

    // 销毁哈希表实例
    hash_table_delete(ht);
    pause();
    return 0;
}
