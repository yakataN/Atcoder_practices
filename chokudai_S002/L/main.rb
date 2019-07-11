n = gets.chomp.to_i
ary = []
n.times do
    ary << gets.chomp.split.map(&:to_i)
end

dp = [[]]
dp[0][0] = [0,Float::INFINITY]
# p dp[0]
for i in 0...n
    dp[i].each_with_index do |item. index|
        if item[0] == 0
            dp[i+1][0] = item
        else
            if 
