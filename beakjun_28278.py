import sys
stack = []
n = sys.stdin.readline().strip()
for i in range(int(n)):
    req = sys.stdin.readline().strip()
    if len(req) > 1:
        req1, req2 = req.split()
        req1 = int(req1)
        req2 = int(req2)
        stack.append(req2)
    elif req == '2':
        if len(stack) == 0:
            print(-1)
        else:
            temp = stack.pop(-1)
            print(temp)
    elif req == '3':
        print(len(stack))
    elif req == '4':
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif req == '5':
        if len(stack) != 0:
            print(stack[len(stack) - 1])
        else:
            print(-1)
    