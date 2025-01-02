#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

// 哈夫曼树节点
struct Node
{
    char ch;
    int freq;
    Node *left;
    Node *right;

    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

// 比较器，用于优先队列排序
struct Compare
{
    bool operator()(Node *a, Node *b)
    {
        return a->freq > b->freq;
    }
};

// 递归生成哈夫曼编码
void generateCodes(Node *root, const string &currentCode, unordered_map<char, string> &codes)
{
    if (!root)
        return;

    if (root->ch != '\0')
    {
        codes[root->ch] = currentCode;
    }

    generateCodes(root->left, currentCode + "0", codes);
    generateCodes(root->right, currentCode + "1", codes);
}

// 构建哈夫曼树
Node *buildHuffmanTree(const unordered_map<char, int> &freqMap)
{
    priority_queue<Node *, vector<Node *>, Compare> pq;

    // 将频率表中的每个字符创建为叶子节点并插入优先队列
    for (auto &pair : freqMap)
    {
        pq.push(new Node(pair.first, pair.second));
    }

    // 构建哈夫曼树
    while (pq.size() > 1)
    {
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();

        Node *parent = new Node('\0', left->freq + right->freq);
        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    return pq.top(); // 返回树的根节点
}

// 主函数
int main()
{
    string input;
    cout << "请输入文本：";
    getline(cin, input);

    // 统计字符频率
    unordered_map<char, int> freqMap;
    for (char c : input)
    {
        freqMap[c]++;
    }

    // 构建哈夫曼树
    Node *root = buildHuffmanTree(freqMap);

    // 生成哈夫曼编码
    unordered_map<char, string> codes;
    generateCodes(root, "", codes);

    // 输出编码结果
    cout << "哈夫曼编码结果：" << endl;
    for (auto &pair : codes)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}