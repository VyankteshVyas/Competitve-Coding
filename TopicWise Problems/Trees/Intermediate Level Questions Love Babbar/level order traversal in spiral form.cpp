//iss program ke andar simple sa logic yeah laga hai ki 1st stack represent ith level and 2nd stack represent i+1th level
vector<int> findSpiral(Node *root)
{
    
    stack<Node*> s1,s2;
    s1.push(root);
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    while(!s1.empty()||!s2.empty()){
    	while(!s1.empty()){
        	Node* val=s1.top();
        	ans.push_back(val->data);
        	s1.pop();
        	
            if(val->right!=NULL){
            	s2.push(val->right);
            }
            if(val->left!=NULL){
        	    s2.push(val->left);
            }
        }
    
        while(!s2.empty()){
        	Node* val=s2.top();
        	ans.push_back(val->data);
        	s2.pop();
        	if(val->left!=NULL){
        	    s1.push(val->left);
            }
        	if(val->right!=NULL){
        	    s1.push(val->right);
            }
        
        	
        
        }
    }
    return ans;

}