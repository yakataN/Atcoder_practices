s = gets.chomp
# n = gets.chomp.to_i
# ary = gets.chomp.split.map(&:to_i)
flag = false
for i in 1..3
    if s[i] == s[i-1]
        flag = true
    end
end

if flag
    puts "Bad"
else
    puts "Good"
end