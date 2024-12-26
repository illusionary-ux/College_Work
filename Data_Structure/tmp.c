#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TREE_HT 100

// 哈夫曼树节点结构
struct HuffmanNode
{
    char data;     // 字符
    unsigned freq; // 频率
    struct HuffmanNode *left, *right;
};

// 创建新节点
struct HuffmanNode *createNode(char data, unsigned freq)
{
    struct HuffmanNode *temp = (struct HuffmanNode *)malloc(sizeof(struct HuffmanNode));
    temp->data = data;
    temp->freq = freq;
    temp->left = temp->right = NULL;
    return temp;
}

// 根据频率排序节点
void sortNodes(struct HuffmanNode **nodes, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (nodes[j]->freq > nodes[j + 1]->freq)
            {
                struct HuffmanNode *temp = nodes[j];
                nodes[j] = nodes[j + 1];
                nodes[j + 1] = temp;
            }
        }
    }
}

// 构建哈夫曼树
struct HuffmanNode *buildHuffmanTree(char data[], int freq[], int size)
{
    struct HuffmanNode *nodes[size];

    for (int i = 0; i < size; ++i)
    {
        nodes[i] = createNode(data[i], freq[i]);
    }

    while (size > 1)
    {
        sortNodes(nodes, size);

        struct HuffmanNode *left = nodes[0];
        struct HuffmanNode *right = nodes[1];

        struct HuffmanNode *newNode = createNode('$', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;

        nodes[0] = newNode;
        for (int i = 1; i < size - 1; ++i)
        {
            nodes[i] = nodes[i + 1];
        }
        size--;
    }

    return nodes[0];
}

// 打印哈夫曼编码
void printCodes(struct HuffmanNode *root, int arr[], int top, char codes[256][MAX_TREE_HT])
{
    if (root->left)
    {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1, codes);
    }

    if (root->right)
    {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1, codes);
    }

    if (!(root->left) && !(root->right))
    {
        printf("%c: ", root->data);
        for (int i = 0; i < top; ++i)
        {
            printf("%d", arr[i]);
            codes[(int)root->data][i] = '0' + arr[i];
        }
        codes[(int)root->data][top] = '\0';
        printf("\n");
    }
}

// 编码输入字符串
void encodeString(char *input, char codes[256][MAX_TREE_HT])
{
    printf("编码结果: ");
    for (int i = 0; input[i] != '\0'; ++i)
    {
        printf("%s", codes[(int)input[i]]);
    }
    printf("\n");
}

// 解码输入编码
void decodeString(char *encoded, struct HuffmanNode *root)
{
    printf("解码结果: ");
    struct HuffmanNode *current = root;
    for (int i = 0; encoded[i] != '\0'; ++i)
    {
        if (encoded[i] == '0')
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }

        if (!(current->left) && !(current->right))
        {
            printf("%c", current->data);
            current = root;
        }
    }
    printf("\n");
}

int main()
{
    char input[256];
    printf("请输入要编码的字符串: ");
    scanf("%255s", input);

    int freq[256] = {0};
    for (int i = 0; input[i] != '\0'; ++i)
    {
        freq[(int)input[i]]++;
    }

    char data[256];
    int freqList[256], size = 0;
    for (int i = 0; i < 256; ++i)
    {
        if (freq[i] > 0)
        {
            data[size] = (char)i;
            freqList[size] = freq[i];
            size++;
        }
    }

    struct HuffmanNode *root = buildHuffmanTree(data, freqList, size);

    char codes[256][MAX_TREE_HT] = {0};
    int arr[MAX_TREE_HT], top = 0;
    printf("字符及其对应的哈夫曼编码如下:\n");
    printCodes(root, arr, top, codes);

    encodeString(input, codes);

    char encoded[1024];
    printf("请输入要解码的字符串: ");
    scanf("%1023s", encoded);

    decodeString(encoded, root);

    return 0;
}
