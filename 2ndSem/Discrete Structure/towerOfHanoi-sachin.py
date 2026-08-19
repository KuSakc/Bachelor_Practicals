def hanoi(n, src="A", aux="B", dst="C"):
    if n == 0:
        return
    hanoi(n - 1, src, dst, aux)
    print(f"Move disk {n} from {src} -> {dst}")
    hanoi(n - 1, aux, src, dst)


if __name__ == "__main__":
    n = int(input("Enter number of disks: "))
    hanoi(n)
    print("minimum number of moves:", 2**n - 1)
    