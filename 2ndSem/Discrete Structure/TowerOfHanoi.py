class Hanoi:
    move_counter: int = 0
    completed: bool = False


    def __init__(self, A: list[tuple[str,int]], B: list[tuple[str,int]], C: list[tuple[str,int]]):
        self.Tower_A= A
        self.Tower_B = B
        self.Tower_C = C


    getWeight= lambda Tower: Tower[0][1]

    def judgeCompletion(self) -> None:
        if len(self.Tower_A) == 3:
            print("Hanoi Completed in Tower A")
            self.completed = True
        elif len(self.Tower_B) == 3:
            print("Hanoi Completed in Tower B")
            self.completed = True
        elif len(self.Tower_C) == 3:
            print("Hanoi Completed in Tower C")
            self.completed = True


    def judgeValidity(self, TowerPrev: list[tuple[str,int]], TowerNew: list[tuple[str,int]]) -> bool:
        if self.getWeight(TowerNew) > self.getWeight(TowerPrev):
             return True
        else:
            return False


    def moveDisk(self, TowerPrev: list[tuple[str,int]], TowerNew: list[tuple[str,int]]):
            if self.judgeValidity(TowerPrev, TowerNew):
                 self.move_counter+=1
            else:
                 pass

def main():
    hanoi = Hanoi([("Disk",1)],[("Disk",2)], [("Disk",3)])
    print(hanoi.move_counter)

if __name__ == '__main__':
    main()


    # Tower_A = [("Disk",1)]
    # Tower_B = [("Disk",2)]
    # Tower_C = [("Disk",3)]
