srch = 'bob'
start = numBobs = 0 while start >= 0:
    pos = s.find(srch, start)
    if pos < 0:
      break
    numBobs += 1
    start = pos + len(srch)
