struct node* insert(struct node* root,int key)
{
	if(root==NULL)
		return createNew(key);
	else if(key<root->key)
		root->left=insert(root->left,key);
	else if(key>root->key)
		root->right=insert(root->right,key);
	int balance=getBalance(struct node* root);
	if(balance>1&&key<root->left->key)
		return rightrotate(root);

}