102题，树zig zag按层遍历

有三个方法：
1.
 //别人想法很棒，while中嵌套loop，一进入while，就数一下queue中有多少个元素，这些元素都是同一层的，
 //然后创建新的向量，按照zig-zag模式，做一个for loop（这个size）填充这个向量的各个位置；然后这一批都弹出来了，它们的子节点都
 //进去了；于是下一个while来了，又是处理新的一层。太棒了！！！
 //将树分层！
2. 
 //java那个版本是利用recursive传入level这个参数，然后也去判断ans.size（）和现在的level的关系，因此也是只新建1次。
3. 
  新建一个structure，然后保存TreeNode* 和 int pos，queue中存入这个结构，这样node的位置信息就可以到处都能使用。
  这个复杂平实一点，没有方法1那么巧妙，但可以有更广的用途，不仅仅判断层，还可以判断其它信息，比如可以依此判断两个节点是neighbor
