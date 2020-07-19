#include <iostream>

using namespace std;

struct tree {
	int data;
	tree *left; 
	tree *right;
};

struct tree *new_node(int data) {
	struct tree *node_tmp = (struct tree *)malloc(sizeof(struct tree));
	if (node_tmp != NULL) {
		node_tmp -> data = data;
		node_tmp -> left = NULL;
		node_tmp -> right = NULL;	
	}
	return node_tmp;
}

struct tree *insert(struct tree *tree, int data) {
	if (tree == NULL) return new_node(data);
	
	if (data < tree -> data) {
		tree -> left = insert(tree -> left, data); 
	} else {
		tree -> right = insert(tree -> right, data);
	}
	
	return tree;
}

void print_tree_inorder(struct tree *tree, string type, int n) {
	if (tree != NULL) {
		if (type.compare("INORDER") == 0) {
			print_tree_inorder(tree -> left, type, n);
			printf(" %d", tree -> data);
			print_tree_inorder(tree -> right, type, n);	
		} else if (type.compare("PRE") == 0) {
			printf(" %d", tree -> data);
			print_tree_inorder(tree -> left, type, n);
			print_tree_inorder(tree -> right, type, n);
		} else if (type.compare("POST") == 0) {
			print_tree_inorder(tree -> left, type, n);
			print_tree_inorder(tree -> right, type, n);
			printf(" %d", tree -> data);
		}
	}
}

int main() {
	
	int c, n, input, i, count = 0;
	
	cin >> c;
	while(c--) {
		struct tree *tree = NULL;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> input;
			tree = insert(tree, input);
		}
		printf("Case %d:\n", ++count);
		
		printf("Pre.:");
		print_tree_inorder(tree, "PRE", n); 
		
		printf("\nIn..:");
		print_tree_inorder(tree, "INORDER", n); 
		
		printf("\nPost:");
		print_tree_inorder(tree, "POST", n);
		printf("\n\n");
	}
	
	return 0;
}
