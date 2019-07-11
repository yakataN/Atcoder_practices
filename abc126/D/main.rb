n = gets.chomp.to_i
ary = []
(n-1).times do |item|
    ary << gets.chomp.split.map(&:to_i)
end
ary.sort!
# p ary
ans = []
for i in 0..(n-1)
    ans << i
end

now_number = 1
ary.each_with_index do |item, index|
    
