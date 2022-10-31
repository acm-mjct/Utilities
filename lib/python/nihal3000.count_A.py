def count_A(str):
    cnt = 0
    for i in str:
        if i in 'Aa':
            cnt = cnt+1
    print(cnt)
        

s = '''
      Because he's the hero gotham deserves,
      but not the one it needs right now!
      so we'll hunt him,because he can take it.
      Because he is not a hero,
      he's a silent guardian,
      a watchful protector,
      He's the dark knight...
'''
count_A(s)