quantity=int(input('enter the quantity of item : '))
price=float(input('enter the price of item : '))
if(quantity>=100):
    discount =10
else:
    discount = 0   
expences=quantity*price
totalexpences= expences-expences*(10/100)
print(totalexpences)