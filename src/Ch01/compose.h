#ifndef COMPOSE_H
#define COMPOSE_H

template <typename F, typename G> auto compose(F f, G g) {
  return [f, g](auto x) { return f(g(x)); };
}
#endif // COMPOSE_H
