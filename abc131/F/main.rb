n = gets.chomp.to_i
ary = []
n.times do
    ary << gets.chomp.split.map(&:to_i)
end

ary.sort!
