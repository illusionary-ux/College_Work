#include <iostream>
#include <queue>
#include <vector>
#include <easyx.h>
#include <cmath>
using namespace std;

// 定义哈夫曼树的节点结构体
struct Node
{
    char ch;     // 字符
    int weight;  // 权重
    Node *left;  // 左子节点
    Node *right; // 右子节点

    // 构造函数
    Node(char c, int w) : ch(c), weight(w), left(nullptr), right(nullptr) {}
};

// 优先队列排序规则：最小权重优先
struct Compare
{
    bool operator()(Node *a, Node *b)
    {
        return a->weight > b->weight;
    }
};
Node *buildHuffmanTree(vector<pair<char, int>> &data)
{
    priority_queue<Node *, vector<Node *>, Compare> pq;

    // 初始化优先队列
    for (auto &d : data)
    {
        pq.push(new Node(d.first, d.second));
    }

    // 动态生成哈夫曼树
    while (pq.size() > 1)
    {
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();

        // 合并节点
        Node *parent = new Node('\0', left->weight + right->weight);
        parent->left = left;
        parent->right = right;

        pq.push(parent);

        // 在这里插入绘制代码
        drawMergeProcess(left, right, parent);
    }

    return pq.top(); // 返回根节点
}
void drawNode(int x, int y, char ch, int weight)
{
    setfillcolor(LIGHTGRAY);
    solidcircle(x, y, 20); // 绘制节点圆
    settextcolor(BLACK);
    char info[10];
    if (ch == '\0') // 非叶节点显示权重
        sprintf(info, "%d", weight);
    else // 叶节点显示字符和权重
        sprintf(info, "%c:%d", ch, weight);
    outtextxy(x - 15, y - 10, info);
}

void drawLine(int x1, int y1, int x2, int y2)
{
    setlinestyle(PS_SOLID, 2);
    line(x1, y1, x2, y2); // 绘制连线
}

// 递归绘制哈夫曼树
void drawHuffmanTree(Node *root, int x, int y, int hGap)
{
    if (!root)
        return;

    drawNode(x, y, root->ch, root->weight);

    if (root->left)
    {
        drawLine(x, y + 20, x - hGap, y + 80);
        drawHuffmanTree(root->left, x - hGap, y + 100, hGap / 2);
    }
    if (root->right)
    {
        drawLine(x, y + 20, x + hGap, y + 80);
        drawHuffmanTree(root->right, x + hGap, y + 100, hGap / 2);
    }
}

// 绘制合并过程（示例）
void drawMergeProcess(Node *left, Node *right, Node *parent)
{
    cleardevice(); // 清屏
    int screenWidth = 800, screenHeight = 600;
    int xCenter = screenWidth / 2, yStart = 100;

    drawNode(xCenter - 150, yStart, left->ch, left->weight);
    drawNode(xCenter + 150, yStart, right->ch, right->weight);
    drawNode(xCenter, yStart + 150, parent->ch, parent->weight);
    drawLine(xCenter - 150, yStart + 20, xCenter, yStart + 150 - 20);
    drawLine(xCenter + 150, yStart + 20, xCenter, yStart + 150 - 20);

    Sleep(1000); // 延迟以展示动态过程
}
int main()
{
    // 初始化数据
    vector<pair<char, int>> data = {{'A', 5}, {'B', 9}, {'C', 12}, {'D', 13}, {'E', 16}, {'F', 45}};

    // 初始化 EasyX 窗口
    initgraph(800, 600);
    setbkcolor(WHITE);
    cleardevice();

    // 构造哈夫曼树
    Node *root = buildHuffmanTree(data);

    // 绘制最终哈夫曼树
    cleardevice();
    drawHuffmanTree(root, 400, 50, 150);

    // 等待退出
    getchar();
    closegraph();
    return 0;
}
