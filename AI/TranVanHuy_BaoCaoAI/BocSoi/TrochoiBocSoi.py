import random

stonesLeft = 21
stonesToRemove = 0
userTurn = True

print("Số lượng sỏi hiện tại là:", stonesLeft)

while stonesLeft > 0:
    while userTurn == True and stonesLeft > 0:

        stonesToRemove = int(input("Muốn bốc bao nhiêu viên? "))

        if stonesToRemove > 3:
            print( "Phạm qui tắc mời bốc lại ^^! Số lượng sỏi hiện tại là: " + str(stonesLeft) )     
        elif stonesLeft - stonesToRemove < 0:
            print("Số lượng đã đã hết")  
        else:
            stonesLeft -= stonesToRemove
            print( "Bạn chọn số viên là: " + str(stonesToRemove) +  " Số lượng sỏi hiện tại là: " + str(stonesLeft) )    

            userTurn = False                       

    while userTurn == False and stonesLeft > 0:

        aiRemoves = random.randint( 1, min(3, stonesLeft) ) 
        stonesLeft -= aiRemoves

        print( "Máy chọn số viên là: " + str(aiRemoves) + 
            " Số lượng sỏi hiện tại là: " + str(stonesLeft) )    

        userTurn = True 

if userTurn == True:    
    print("Máy đã lấy viên cuối cùng. Bạn đã thắng!")
else:
    print("Bạn đã lấy viên cuối cùng. Máy đã thắng")