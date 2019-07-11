n = gets.chomp.to_i
ary = []
n.times do
    ary << gets.chomp.split.map(&:to_i)
end

hash = {}
ary.each do |i|
    ary.each do |j|
        if i==j
            next
        end
        tmpx = i[0] - j[0]
        tmpy = i[1] - j[1]
        if hash.has_key?([tmpx, tmpy])
            hash[[tmpx, tmpy]] += 1
        else
            hash[[tmpx, tmpy]] = 1
        end
    end
end
# p hash
if n==1
    puts 1
else
    p n - (hash.max{ |x, y| x[1] <=> y[1] })[1]
end
    