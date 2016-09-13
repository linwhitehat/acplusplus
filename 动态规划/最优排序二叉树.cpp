// 定理：最优排序二叉树的子树也是最优排序二叉树
// 时间复杂度：计算每个C[i,j]和root[i,j]需要枚举艮结点，故为O(n^3)
// 空间复杂度：需要两个n*n矩阵，O(n^2)

// 可以利用root矩阵递归地构造出最优树
