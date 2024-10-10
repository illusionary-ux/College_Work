# include<stdio.h>
# include<string.h>

# define MAXSIZE 100

typedef struct
{
    char content[MAXSIZE];
    char *top;
    char *base;
    int used_space;
} Stack;

void InitStack(Stack *stack);
void PushStack(Stack *stack,char ch);
void PopStack(Stack *stack);
void FreeStack(Stack *stack);
void PrintStack(Stack *stack);

int main(void)
{
    Stack stack;
    InitStack(&stack);

    char input[MAXSIZE];
    printf("请输入一行内容（# 表示退格，@ 表示清空）：\n");
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '#')
        {
            PopStack(&stack);
        }
        else if (input[i] == '@')
        {
            FreeStack(&stack);
        }
        else
        {
            PushStack(&stack, input[i]);
        }
    }
    printf("编辑后的内容是: ");
    PrintStack(&stack);
    return 0;
}

void InitStack(Stack *stack)
{
    stack->used_space = 0;
    stack->base = &stack->content[0];
    stack->top = &stack->content[0];
}

void PushStack(Stack *stack, char ch)
{
    if (stack->used_space < MAXSIZE)
    {
        *stack->top = ch;
        stack->top++;
        stack->used_space++;
    }
}

void PopStack(Stack *stack)
{
    if (stack->used_space > 0)
    {
        stack->top--;
        stack->used_space--;
    }
}

void FreeStack(Stack *stack)
{
    stack->top = stack->base; // 重置栈顶指针
    stack->used_space = 0;    // 重置使用空间计数
}

void PrintStack(Stack *stack)
{
    char *ptr = stack->base;  // 从栈底开始遍历
    while (ptr != stack->top) // 遍历直到栈顶
    {
        putchar(*ptr); // 输出当前字符
        ptr++;         // 移动指针到下一个字符
    }
    printf("\n");
}