#include <stdio.h> // 引入标准输入输出库

// 定义组合函数
void combination(int arr[], int data[], int start, int end, int index, int r) {
    if (index == r) { // 当索引等于r时，找到一个有效的组合
        for (int j = 0; j < r; j++) // 遍历并打印当前组合
            printf("%3d", data[j]);
        printf("\n"); // 换行
        return; // 返回，结束当前递归
    }
    // 对数组的剩余部分进行迭代
    for (int i = start; i <= end && end - i + 1 >= r - index; i++) {
        data[index] = arr[i]; // 将当前元素添加到当前组合中
        // 递归地在剩余元素中寻找剩余的组合元素
        combination(arr, data, i + 1, end, index + 1, r);
    }
}

// 定义打印组合函数
void printCombination(int arr[], int n, int r) {
    int data[r]; // 创建一个大小为r的数组来存储当前的组合
    // 调用组合函数生成并打印所有可能的组合
    combination(arr, data, 0, n - 1, 0, r);
}

int main() { // 主函数
    int n, r; // 定义n和r
    scanf("%d %d", &n, &r); // 读取输入的n和r
    int arr[n]; // 创建一个包含从1到n的数字的数组
    for (int i = 0; i < n; i++)
        arr[i] = i + 1; // 初始化数组
    printCombination(arr, n, r); // 调用打印组合函数
    return 0; // 主函数返回0，表示程序正常结束
}


/*这段代码首先读取输入的n和r，然后创建一个数组arr，其中包含从1到n的数字。然后，它调用printCombination函数，
该函数使用递归函数combination生成并打印所有可能的组合。在combination函数中，我们使用index来跟踪当前组合中的下一个位置，
start和end来跟踪我们正在考虑的数组部分。当index等于r时，我们知道我们已经找到了一个有效的组合，所以我们打印它。
否则，我们对数组的剩余部分进行迭代，并将当前元素添加到当前组合中，然后递归地在剩余元素中寻找剩余的组合元素。
我们还使用end - i + 1 >= r - index这个条件来确保我们有足够的元素来填充剩余的组合位置。这样，我们就可以避免不必要的递归调用。
最后，我们打印出所有的组合。这个程序的时间复杂度是O(nCr)，其中nCr
是从n个元素中选择r个元素的组合数。这是因为我们需要生成和打印所有可能的组合。空间复杂度是O(r)
，这是因为我们需要一个大小为r的数组来存储当前的组合。这个程序应该能够在合理的时间内处理最大的输入值。注意，这个程序假设输入的n和r都是有效的，即1 < n < 21和0 <= r <= n*/
