#include <iostream>
#include <string>
#include <utility>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;

struct ListNode {
    struct ListNode *next{};
    string data;
};

struct ListNode *insertNodeEnd(struct ListNode *root, string data) {
    auto new_node = new ListNode;
    if (root) {
        while (root->next)
            root = root->next;

        new_node->next = nullptr;
        new_node->data = std::move(data);
        root->next = new_node;

        return root->next;
    }
    new_node->next = nullptr;
    new_node->data = std::move(data);
    return new_node;
}

void freeNodes(struct ListNode *root) {
    struct ListNode *tmp = nullptr;
    while (root) {
        tmp = root;
        root = root->next;
        delete tmp;
    }
}

void printNodes(struct ListNode *node) {
    auto count = 0;
    while (node){
        cout << "node " << count << " - data: " << node->data << endl;
        node = node->next;
        count++;
    }
}

int main() {
    struct ListNode *head = nullptr;

    vector<string> data_set = { "Mark", "Nathan",  "Tyler"};

    head = insertNodeEnd(head, data_set.at(0));
    for (auto it = data_set.begin() + 1; it != data_set.end(); ++it) {
        insertNodeEnd(head, *it);
    }
    printNodes(head);
    cout << " ----------------------------------- " << endl;

    insertNodeEnd(head, "Ane");
    printNodes(head);

    freeNodes(head);
    return EXIT_SUCCESS;
}
