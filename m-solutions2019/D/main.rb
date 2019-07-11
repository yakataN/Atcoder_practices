n = gets.chomp.to_i
ary = []

(n-1).times do |i|
    # tmp = []
    # tmp << gets.chomp.split.map(&:to_i)
    # tmp.sort!
    # ary << tmp
    ary << gets.chomp.split.map(&:to_i)
end
c_ary = gets.chomp.split.map(&:to_i)
ary.sort!
tree = {}
# p ary
for i in 0...ary.length
    a = ary[i][0]
    b = ary[i][1]

    if tree[a] != nil
        tree[a]["edge"] << b
    else
        tree[a] = {"edge" => [b]}
    end
    if tree[b] != nil
        tree[b]["edge"] << a
    else
        tree[b] = {"edge" => [a]}
    end
end
p tree

def dfs(tree, now, cnt)
    if cnt == n
        return 
    end
    tree[now]["edge"].each do |point|
        if point["value"] == nil
            # cnt: 今まで訪れたpointの数
            tree[point]["value"] = cnt
            if tree[now]["value"] != cnt-1
                tree[now]["value"], tree[chokuzen]
            end
        end

        dfs()

    return tree

# for i in 0...ary.length
#     a = ary[i][0]
#     b = ary[i][1]
#     # puts i
#     # p ary[i]
#     if i == 0
#         tree[a] = {"edge" => [b], "value" => 0}
#         tree[b] = {"edge" => [a], "value" => 1}
#         chokuzen = b
#     else
#         if tree[a] != nil
#             tree[b] = {"edge" => [a], "value" => i+1}
#             tree[a]["edge"] << b
#             if chokuzen != a
#                 tree[chokuzen]["value"], tree[a]["value"] = tree[a]["value"], tree[chokuzen]["value"]
#             end
#             chokuzen = b
#         else tree[b] != nil
#             tree[a] = {"edge" => [b], "value" => i+1}
#             tree[b]["edge"] << a
#             if chokuzen != b
#                 tree[chokuzen]["value"], tree[b]["value"] = tree[b]["value"], tree[chokuzen]["value"]
#             end
#             chokuzen = a
#         end
#     end
# end
# # p tree
# c_ary.sort!

# puts c_ary.inject(:+) - c_ary[-1]
# ans = []
# for i in 1..n
#     ans << c_ary[tree[i]["value"]]
# end
# print(ans.join(" "))