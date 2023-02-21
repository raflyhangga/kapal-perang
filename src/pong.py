import random as rand

world = [['0' for i in range (11)] for i in range (11)]


row = 5
column = 5
jumlahmusuh = rand.randint(1,4)

def spawnEnemy():
        global jumlahmusuh
        for a in range (jumlahmusuh):
                i = rand.randint(0,10)
                j = rand.randint(0,10)
                world [i][j] = "A"



def printmatrix():
        global row
        global column
        for i in range (11):
                for j in range (11):
                        if(i==row and j==column):
                                print("P", end=" ")
                        else:
                                print(world[i][j],end=" ")
                print("")
        return 
    
def gerak():
        global row
        global column
        while(True):
                gerak = input("w untuk maju, s untuk mundur, a untuk ke kiri, d untuk ke kanan: ")
                if (gerak == 'w'):
                        row-=1
                        printmatrix()
                elif (gerak == 's'):
                        row+=1
                        printmatrix()

                if (gerak == 'a'):
                        column+=1
                        printmatrix()

                elif (gerak == 'd'):
                        column-=1
                        printmatrix()
                elif (gerak == "exit"):
                        break
            
            
spawnEnemy()
while (True):
        printmatrix()
        gerak()

