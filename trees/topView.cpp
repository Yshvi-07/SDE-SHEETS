map<int,int> um;
    if(!root)
      return {};
    //um[0]=root->val;
    queue<pair<TreeNode<int> *,int>> q;
    q.push({root, 0});
    while(!q.empty()){
        int n=q.size();
        while(n--){
            auto f=q.front();
            q.pop();
            if(um.find(f.second)==um.end())um[f.second]=f.first->val;
            if(f.first->left) q.push({f.first->left,f.second-1});
            if(f.first->right) q.push({f.first->right,f.second+1});
        }
    }
    vector<int> ans;
    for(auto x:um){
      ans.push_back(x.second);
    }
    return ans;
}
