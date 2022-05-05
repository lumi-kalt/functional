constexpr auto identity(auto&& a)
-> decltype(auto) {
    return std::forward<decltype(a)>(a);
}
