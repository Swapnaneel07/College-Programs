if __name__ == '__main__':
    N = int(input())
    cmds = []
    for i in range(N):
        cmd = input() 
        cmds.append(cmd)

    final_cmds=[cmd.split(" ") for cmd in cmds]

    output_list=[]
    for cmd in final_cmds:              #using match case for the operations.
        match cmd[0]:
            case 'insert':
                output_list.insert(int(cmd[1]),int(cmd[2]))
            case 'print':
                print(output_list)
            case 'remove':
                output_list.remove(int(cmd[1]))
            case 'append':
                output_list.append(int(cmd[1]))
            case 'sort':
                output_list.sort()
            case 'pop':
                output_list.pop()
            case 'reverse':
                output_list.reverse()
            case _:
                print('Invalid list method')
