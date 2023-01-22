import subprocess
takeinput = str(input())
if(takeinput=="ps -rf"):
    proc = subprocess.check_output(["ps","ef"], shell=True)
    _list = proc.decode().split('\n')
    for x in range(1,len(_list)-1):
        print(_list[x].split()[0])
