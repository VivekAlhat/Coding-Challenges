def add(A,B):
	cnt = 0
	a = int(A,2)
	b = int(B,2)
	while(b>0):
		u = a ^ b
		v = a & b
		a = u
		b = v * 2
		cnt = cnt+1
	return cnt
	
t = int(input())
for i in range(t):
	A = input()
	B = input()
	print(add(A,B))


