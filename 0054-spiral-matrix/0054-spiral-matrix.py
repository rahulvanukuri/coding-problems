class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        m, n = len(matrix), len(matrix[0])  # Matrix dimensions
        ans = []
        up, down, left, right = 0, m - 1, 0, n - 1  # Boundaries
        
        while len(ans) < m * n:
            # Move right
            for j in range(left, right + 1):
                ans.append(matrix[up][j])
            up += 1
            
            # Move down
            for i in range(up, down + 1):
                ans.append(matrix[i][right])
            right -= 1
            
            # Move left
            if up <= down:
                for j in range(right, left - 1, -1):
                    ans.append(matrix[down][j])
                down -= 1
            
            # Move up
            if left <= right:
                for i in range(down, up - 1, -1):
                    ans.append(matrix[i][left])
                left += 1
        
        return ans



        