n, k = gets.chomp.split.map(&:to_i)
ary = gets.chomp.split.map(&:to_i)


ruisekiwa = [ary[0]]
for i in 1...n
    ruisekiwa.push(ruisekiwa[i-1]+ary[i])
end
count = 0

def nibutan(start, k)
    # puts k
    
end


for i in 0...n
    end_num = nibutan(ruisekiwa[i], k)
    count += n-end_num
end
puts count
