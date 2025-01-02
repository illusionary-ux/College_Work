#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
//leaf 2 root
// 定义哈夫曼树的节点结构
struct HuffmanNode
{
    char character;            // 存储字符
    int frequency;             // 字符出现的频率
    HuffmanNode *left, *right; // 左右子节点

    HuffmanNode(char ch, int freq) : character(ch), frequency(freq), left(nullptr), right(nullptr) {}
};

// 自定义比较器，用于优先队列
struct Compare
{
    bool operator()(HuffmanNode *a, HuffmanNode *b)
    {
        return a->frequency > b->frequency;
    }
};

// 递归函数，从叶子节点追溯到根节点生成哈夫曼编码
void generateCodes(HuffmanNode *root, unordered_map<char, string> &huffmanCodes, string currentCode)
{
    if (!root)
        return;

    // 如果当前节点是叶子节点
    if (!root->left && !root->right)
    {
        huffmanCodes[root->character] = currentCode;
    }

    // 递归遍历左子树和右子树
    generateCodes(root->left, huffmanCodes, currentCode + "0");
    generateCodes(root->right, huffmanCodes, currentCode + "1");
}

// 构建哈夫曼树并生成编码
unordered_map<char, string> buildHuffmanTree(const unordered_map<char, int> &frequencies)
{
    // 创建优先队列，用于存储哈夫曼树节点
    priority_queue<HuffmanNode *, vector<HuffmanNode *>, Compare> pq;

    // 创建叶子节点并加入优先队列
    for (auto &pair : frequencies)
    {
        pq.push(new HuffmanNode(pair.first, pair.second));
    }

    // 构建哈夫曼树
    while (pq.size() > 1)
    {
        HuffmanNode *left = pq.top();
        pq.pop();
        HuffmanNode *right = pq.top();
        pq.pop();

        // 创建新节点，频率为左右子节点频率之和
        HuffmanNode *newNode = new HuffmanNode('\0', left->frequency + right->frequency);
        newNode->left = left;
        newNode->right = right;
        pq.push(newNode);
    }

    // 获取哈夫曼树的根节点
    HuffmanNode *root = pq.top();

    // 生成哈夫曼编码
    unordered_map<char, string> huffmanCodes;
    generateCodes(root, huffmanCodes, "");

    return huffmanCodes;
}

int main()
{
    // 读取用户输入的文本
    string inputText;
    cout << "请输入一段文本: ";
    getline(cin, inputText);

    // 统计字符频率
    unordered_map<char, int> frequencies;
    for (char ch : inputText)
    {
        frequencies[ch]++;
    }

    // 构建哈夫曼树并生成编码
    unordered_map<char, string> huffmanCodes = buildHuffmanTree(frequencies);

    // 输出每个字符的编码
    cout << "Character\tHuffman Code" << endl;
    for (auto &pair : huffmanCodes)
    {
        cout << pair.first << "\t\t" << pair.second << endl;
    }

    // 输出文本对应的哈夫曼编码
    cout << "\n输入文本的哈夫曼编码: ";
    for (char ch : inputText)
    {
        cout << huffmanCodes[ch];
    }
    cout << endl;

    return 0;
}
