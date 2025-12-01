from typing import List
def calculateSacrificeProfit(buyPrices: List[float], sellPrices: List[float]) -> float:
    total = float(0)
    for i in range(len(buyPrices)):
        total += sellPrices[i] - buyPrices[i]

    return total
