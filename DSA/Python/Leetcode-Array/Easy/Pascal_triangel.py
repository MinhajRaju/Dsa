def pascal(numsRows):
    triangel = []

    for i in range(numsRows):
        row = []

        for j in range(i+1):
            if j ==0 or j == i:
                row.append(1)
            else:
                row.append(triangel[i-1][j-1] + triangel[i-1][j])
        triangel.append(row)

    
    for row in  triangel:
        print(" ".join(map(str ,row)))


pascal(5)