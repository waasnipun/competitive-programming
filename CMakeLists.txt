cmake_minimum_required(VERSION 3.20)
project(Competitive_Progamming)

set(CMAKE_CXX_STANDARD 14)

add_executable(Competitive_Progamming
        AdventofCode/report.cpp
        algorithms/bellmanford.cpp
        algorithms/bfs.cpp
        algorithms/dfs.cpp
        algorithms/dijkstra_unweighted.cpp
        algorithms/dijkstra_weighted_faster.cpp
        algorithms/disjkstra_weighted.cpp
        algorithms/fast_factorial.cpp
        algorithms/fastfibonacci.cpp
        algorithms/floyd_warshall_dpAlgo.cpp
        algorithms/quickunion.cpp
        algorithms/quickunionfindwaited.cpp
        algorithms/topological_sort.cpp
        "Atcoder/Grand Contest 047/a.cpp"
        "Atcoder/Grand Contest 047/b.cpp"
        "Atcoder/Grand Contest 047/c.cpp"
        "codeforces/problem set/A/solution.cpp"
        "codeforces/problem set/B/solution.cpp"
        "codeforces/problem set/C/solution.cpp"
        "codeforces/problem set/D/solution.cpp"
        "codeforces/problem set/E/solution.cpp"
        "codeforces/problem set/F/solution.cpp"
        "codeforces/problem set/template.cpp"
        "codeforces/round 660/a.cpp"
        "codeforces/round 660/b.cpp"
        "codeforces/round 661/a.cpp"
        "codeforces/round 661/b.cpp"
        "codeforces/round 661/c.cpp"
        "codeforces/round 661/d.cpp"
        "codeforces/round 681 Div 2/A/solution.cpp"
        "codeforces/round 681 Div 2/B/solution.cpp"
        "codeforces/round 681 Div 2/C/solution.cpp"
        "codeforces/round 681 Div 2/D/solution.cpp"
        "codeforces/round 681 Div 2/template.cpp"
        codeforces/alarm_clock.cpp
        codeforces/bearandthreeballs.cpp
        codeforces/binary_median.cpp
        codeforces/domino.cpp
        codeforces/dragons.cpp
        codeforces/elimination.cpp
        codeforces/even_array.cpp
        codeforces/fraction.cpp
        codeforces/good_string.cpp
        codeforces/heist.cpp
        codeforces/helpfulmaths.cpp
        codeforces/house.cpp
        codeforces/laddu.cpp
        codeforces/naruto.cpp
        codeforces/next_round.cpp
        codeforces/odd_selection.cpp
        codeforces/problemSet.cpp
        codeforces/ShortSubstrings.cpp
        codeforces/social_distance.cpp
        codeforces/soe_perm.cpp
        codeforces/stacks.cpp
        codeforces/string_task.cpp
        codeforces/sublime.cpp
        codeforces/taxi.cpp
        codeforces/two_arrays.cpp
        codeforces/unstable_array.cpp
        codeforces/workout.cpp
        csacademy/divisibleby3.cpp
        csacademy/threestrings.cpp
        "cses/dynamic programming/array_description.cpp"
        "cses/dynamic programming/book_shop.cpp"
        "cses/dynamic programming/coin_combination1.cpp"
        "cses/dynamic programming/coin_combination2.cpp"
        "cses/dynamic programming/dice_combination.cpp"
        "cses/dynamic programming/edit_distamce.cpp"
        "cses/dynamic programming/grid_paths.cpp"
        "cses/dynamic programming/increasing_sequence.cpp"
        "cses/dynamic programming/minimize_coins.cpp"
        "cses/dynamic programming/money_sums.cpp"
        "cses/dynamic programming/rectangle_cutting.cpp"
        "cses/dynamic programming/removal_game.cpp"
        "cses/dynamic programming/removin_digits.cpp"
        "cses/dynamic programming/two_sets.cpp"
        cses/graphs/1682.cpp
        cses/graphs/building_roads.cpp
        cses/graphs/building_teams.cpp
        cses/graphs/course_schedule.cpp
        cses/graphs/coutning_rooms.cpp
        cses/graphs/cycle_finding.cpp
        cses/graphs/flight_discount.cpp
        cses/graphs/flight_routes.cpp
        cses/graphs/game_routes.cpp
        cses/graphs/high_score.cpp
        cses/graphs/Labyrinth.cpp
        cses/graphs/Labyrinth_bfs.cpp
        cses/graphs/longest_flight_routes.cpp
        cses/graphs/message_route.cpp
        cses/graphs/planet_queries.cpp
        cses/graphs/road_repair.cpp
        cses/graphs/round_trip.cpp
        cses/graphs/round_trip2.cpp
        cses/graphs/shortest_routes1.cpp
        cses/graphs/shortest_routes2.cpp
        "cses/Introductory problems/increasing_array.cpp"
        "cses/Introductory problems/permutations.cpp"
        "cses/Introductory problems/reptitions.cpp"
        "cses/Introductory problems/weird_algorithm.cpp"
        cses/mathematics/1082.cpp
        cses/mathematics/1096.cpp
        cses/mathematics/1715.cpp
        cses/mathematics/1716.cpp
        cses/mathematics/1717.cpp
        cses/mathematics/1722.cpp
        cses/mathematics/binomial_coefficients.cpp
        cses/mathematics/counting_divisors.cpp
        cses/mathematics/expo_2.cpp
        cses/mathematics/exponentiating.cpp
        "cses/mathematics/Graph_path(1723).cpp"
        cses/mathematics/graph_path2.cpp
        cses/range_queries/1646.cpp
        cses/range_queries/mini_queries.cpp
        "cses/Sorting and Searching/max_sub_aray.cpp"
        "cses/Sorting and Searching/nearestsmallestnumber.cpp"
        "cses/Sorting and Searching/subarray1.cpp"
        "cses/Sorting and Searching/subdivisibility.cpp"
        "cses/Sorting and Searching/sumfour.cpp"
        "cses/Sorting and Searching/towers.cpp"
        "data structures/cpp_maps.cpp"
        "data structures/dynamicarrays.cpp"
        "data structures/random.cpp"
        "facebook hackercup 2020/travel_restriction.cpp"
        "Google kickstart/kickstart-round D-2020/a.cpp"
        "Google kickstart/kickstart-round D-2020/b.cpp"
        "Google kickstart/kickstart-round D-2020/c.cpp"
        "Google kickstart/perfectsquare.cpp"
        Hackerrank/back.cpp
        Hackerrank/binaryTree.cpp
        Hackerrank/botclean.cpp
        Hackerrank/bundles.cpp
        Hackerrank/cittationns.cpp
        Hackerrank/cow_haybales.cpp
        Hackerrank/dead_pixel.cpp
        Hackerrank/fast_food_restaurant.cpp
        Hackerrank/heap.cpp
        Hackerrank/home_coming.cpp
        Hackerrank/ice_cream_parlor.cpp
        Hackerrank/knightL_chessboard.cpp
        Hackerrank/lab4-2.cpp
        Hackerrank/lab4.cpp
        Hackerrank/libraryKickSart.cpp
        Hackerrank/mango.cpp
        Hackerrank/mini_cost.cpp
        Hackerrank/oddevne.cpp
        Hackerrank/princess.cpp
        Hackerrank/satisfying_voters.cpp
        Hackerrank/sock_merchant.cpp
        Hackerrank/sort.cpp
        Hackerrank/sort_bits.cpp
        Hackerrank/subarray_medians.cpp
        "IEEExtreme/IEEEXtreme 2019/backToSquare.cpp"
        "IEEExtreme/IEEEXtreme 2019/dining_table.cpp"
        "IEEExtreme/IEEEXtreme 2019/extractor.cpp"
        "IEEExtreme/IEEEXtreme 2019/gcd.cpp"
        "IEEExtreme/IEEEXtreme 2019/kabloom.cpp"
        "IEEExtreme/IEEEXtreme 2019/ruined_tanks.cpp"
        "IEEExtreme/IEEEXtreme 2019/sheldonsGame.cpp"
        "IEEExtreme/IEEEXtreme 2019/tempCodeRunnerFile.cpp"
        IEEExtreme/IEEExtreme14/A/solution.cpp
        IEEExtreme/IEEExtreme14/B/new.cpp
        IEEExtreme/IEEExtreme14/B/out.c
        IEEExtreme/IEEExtreme14/B/solution.cpp
        IEEExtreme/IEEExtreme14/C/solution.cpp
        IEEExtreme/IEEExtreme14/D/solution.cpp
        IEEExtreme/IEEExtreme14/E/solution.cpp
        IEEExtreme/IEEExtreme14/F/solution.cpp
        IEEExtreme/IEEExtreme14/G/solution.cpp
        IEEExtreme/IEEExtreme14/H/solution.cpp
        IEEExtreme/IEEExtreme14/H/solution_main.cpp
        IEEExtreme/IEEExtreme14/I/solution.cpp
        IEEExtreme/IEEExtreme14/J/solution.cpp
        IEEExtreme/IEEExtreme14/K/solution.cpp
        IEEExtreme/IEEExtreme14/L/solution.cpp
        IEEExtreme/IEEExtreme14/M/solution.cpp
        IEEExtreme/IEEExtreme14/N/solution.cpp
        IEEExtreme/IEEExtreme14/template.cpp
        IEEExtreme/alfapool.cpp
        IEEExtreme/bee.cpp
        IEEExtreme/binary.cpp
        IEEExtreme/binarynew.cpp
        IEEExtreme/counting_Molecules.cpp
        IEEExtreme/Dog_Walking.cpp
        IEEExtreme/foodTruck.cpp
        IEEExtreme/gcd.cpp
        IEEExtreme/googleplex.cpp
        IEEExtreme/infinit.cpp
        IEEExtreme/Inti_set.cpp
        IEEExtreme/magicSquare.cpp
        IEEExtreme/painter_dilemma.cpp
        IEEExtreme/permutations.cpp
        IEEExtreme/playwithGCD.cpp
        IEEExtreme/rapper.cpp
        IEEExtreme/tempCodeRunnerFile.cpp
        IEEExtreme/template.cpp
        IEEExtreme/yingyang.cpp
        kattis/mini_scalar_product.cpp
        kattis/spelling.cpp
        "leetcode/contest 178/first.cpp"
        leetcode/add_two_numbes.cpp
        leetcode/candy.cpp
        leetcode/longest_plaindrome.cpp
        leetcode/median_of_two_sorted_arrays.cpp
        leetcode/unique_paths.cpp
        "moraextreme/moraextreme 2020/1939.cpp"
        "moraextreme/moraextreme 2020/callthebat.cpp"
        "moraextreme/moraextreme 2020/cctv.cpp"
        "moraextreme/moraextreme 2020/fifth.cpp"
        "moraextreme/moraextreme 2020/first.cpp"
        "moraextreme/moraextreme 2020/pathgame.cpp"
        "moraextreme/moraextreme 2020/pathgamenew.cpp"
        "moraextreme/moraextreme 2020/sms.cpp"
        moraextreme/binaryTree.cpp
        moraextreme/dna.cpp
        moraextreme/dnaPattern.cpp
        moraextreme/matric.cpp
        moraextreme/numberCircle.cpp
        moraextreme/rangeQuery.cpp
        moraextreme/shark.cpp
        c+++.cpp
        template.cpp)
