#include <cstring>
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

struct node{
    int data;
    node * right;
    node * left;

    Node(int input){
        data = input;
        left=right=NULL;
    }
};

class tree{
    public:
        tree();
        ~tree();
        int add(int toAdd);
        int height();
        int height(node * root);
        int build(node * & root, int toAdd);
        bool display();
        bool display(node * root);

    private:
        node *root;
}
