n = gets.chomp.to_i
ary = []
n.times do
    ary << gets.chomp.split.map(&:to_i)
end

def fight(i,j)
    tmp_i = i[0]/j[1]
    tmp_j = j[0]/i[1]
    if (tmp_i <=> tmp_j) == 0
        if i[0]%j[1] == 0 
end

winner = []
for i in 0...(n/2+n%2)
    if n <= i*2 + 1
        winner << i*2
    else
        puts fight(ary[i*2], ary[i*2+1])
    end
end