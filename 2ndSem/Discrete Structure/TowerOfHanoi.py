class Hanoi:

    move_counter = 0
    completed = False

    def __init__(self, A, B, C):
        self.Tower_A = A
        self.Tower_B = B
        self.Tower_C = C

    getWeight = lambda Tower: Tower[0][1]

    def judgeCompletion(self):
        if self.Tower_A.count() == 3:
            print("Hanoi Completed in Tower A")
        elif self.Tower_B.count() == 3:
            print("Hanoi Completed in Tower B")
        elif self.Tower_C.count() == 3:
            print("Hanoi Completed in Tower C")


    def judgeValidity(self, TowerPrev, TowerNew):
        if self.getWeight(TowerNew) > self.getWeight(TowerPrev):
             return True
        else:
            return False


    def moveDisk(self, TowerPrev, TowerNew):
            if self.judgeValidity(TowerPrev, TowerNew):
                 return True
            else:
                 return False




    # Tower_A = [("Disk",1)]
    # Tower_B = [("Disk",2)]
    # Tower_C = [("Disk",3)]
