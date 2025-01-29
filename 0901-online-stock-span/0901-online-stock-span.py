class StockSpanner:

    def __init__(self):
        self.s=[]
        

    def next(self, price: int) -> int:
        sp=1
        while self.s and self.s[-1][0]<=price:
            sp+=self.s[-1][1]
            self.s.pop()
        self.s.append([price,sp])

        return self.s[-1][1]
        


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)