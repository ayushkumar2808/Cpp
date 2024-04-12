#include <iostream>
#include <stack>

using namespace std;

int trappedRainwater(int heights[], int n) {
    if (n == 0) return 0;

    stack<int> st;
    int totalWater = 0;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && heights[i] > heights[st.top()]) {
            int top = st.top();
            st.pop();
            if (st.empty()) break;
            int distance = i - st.top() - 1;
            int boundedHeight = min(heights[i], heights[st.top()]) - heights[top];
            totalWater += distance * boundedHeight;
        }
        st.push(i);
    }

    return totalWater;
}

int main() {
    int terrainProfile[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(terrainProfile) / sizeof(terrainProfile[0]);
    cout << "Trapped rainwater: " << trappedRainwater(terrainProfile, n) << endl;
    return 0;
}
