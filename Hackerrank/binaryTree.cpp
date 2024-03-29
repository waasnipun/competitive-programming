#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
class tree{
    public:
  	void preOrder(Node *root) {
      	if( root == NULL )
          	return;
      	cout << root->data << " ";
      	preOrder(root->left);
      	preOrder(root->right);
    }
    Node * insert(Node * root, int data) {
        if(root== NULL){
            root = Node(data);
        }
        else{
            if(root.data<Node(data).data){
                if(root->right == NULL){
                    root->right = Node(data);
                }
                else{
                    insert(root->right,data);
                }
            }
            else{
                if(root->left == NULL){
                    root->left = Node(data);
                }
                else{
                    insert(root->left,data);
                }
            }
        }

        return root;
    }

};

int main() {
    tree myTree;
    Node* root = NULL;
    int t;
    int data;
    cin >> t;
    while(t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.preOrder(root);
    return 0;
}
