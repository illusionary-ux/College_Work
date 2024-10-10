# include<stdio.h>
# include<stdlib.h>
# include<string.h>

# define MAXSIZE 100
typedef struct
{
    char expression[MAXSIZE];
    char *top;
    char *base;
    int used_space;
} Stack;

void InitStack(Stack *stack);
int isBalanced(char expression[]);
void PushStack(Stack *stack, char ch);
int StackEmpty(Stack *stack);
int isMatchingPair(char left, char right);
char PopStack(Stack *stack);

/*创建一个栈：

用栈存储左括号，即'(', '[', '{'。当遇到左括号时，将它压入栈中。
遍历括号序列：

从左到右遍历给定的括号字符串，依次处理每个字符。
处理左括号：

如果遇到左括号'('、'['、'{'，则将该左括号压入栈中。
处理右括号：

如果遇到右括号')'、']'、'}'，则判断栈是否为空：
如果栈为空，说明右括号没有对应的左括号，匹配错误。
如果栈不为空，弹出栈顶元素并检查栈顶是否与当前右括号匹配（即栈顶应为与之对应的左括号）。如果不匹配，括号序列也不正确。
最终检查：

遍历结束后，如果栈不为空，说明有未匹配的左括号，匹配错误。
如果栈为空且所有右括号都成功匹配，说明括号匹配正确。*/
int main(void)
{
    char expression[MAXSIZE];
    scanf("%s", expression);

    if (isBalanced(expression))
    {
        printf("括号匹配正确\n");
    }
    else
    {
        printf("括号不匹配\n");
    }
    return 0;
}

void InitStack(Stack *stack)
{
    stack->base = stack->expression;
    stack->top = stack->expression;
    stack->used_space = 0;
}

int isBalanced(char express[])
{
    Stack stack;
    InitStack(&stack);

    for (int i = 0; i < strlen(express); i++)
    {
        char tmp = express[i];
        if (tmp == '(' || tmp == '[' || tmp == '{')
        {
            PushStack(&stack, tmp);
        }
        if (tmp == ')' || tmp == ']' || tmp == '}')
        {
            if (StackEmpty(&stack))
            {
                return 0;
            }
            char left = PopStack(&stack);
            if (!isMatchingPair(left,tmp))
            {
                return 0;
            }
            
        }
    }
    return stack.used_space == 0;
}

void PushStack(Stack *stack, char ch)
{
    if (stack->used_space < MAXSIZE-1)
    {
        *stack->top = ch;
        stack->top++;
        stack->used_space++;
    }
}

int StackEmpty(Stack *stack)
{
    if (stack->used_space == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isMatchingPair(char left, char right)
{
    return (left == '(' && right == ')') || (left == '[' && right == ']') || (left == '{' && right == '}');
}

char PopStack(Stack *stack)
{
    if (stack->used_space > 0)
    {
        stack->top--;
        stack->used_space--;
        return *(stack->top);
    }
    return '\0'; // 若栈为空，返回空字符
}