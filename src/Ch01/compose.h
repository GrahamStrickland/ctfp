#ifndef COMPOSE_H
#define COMPOSE_H

template <typename F, typename G, typename T> T compose(F f, G g, T x) {
  return f(g(x));
}
#endif // COMPOSE_H
