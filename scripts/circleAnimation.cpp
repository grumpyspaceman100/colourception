private function
circleAnimation
() {
anim1 := data → board → create picture(art → anim1)
anim2 := data → board → create picture(art → anim2)
anim3 := data → board → create picture(art → anim3)
anim4 := data → board → create picture(art → anim4)
anim5 := data → board → create picture(art → anim5)
anim2 → hide
anim3 → hide
anim4 → hide
anim5 → hide
anim1 → set pos(100, 100)
anim2 → set pos(100, 100)
anim3 → set pos(100, 100)
anim4 → set pos(100, 100)
anim5 → set pos(100, 100)
time → run every(0.1) {
 ;
}
}
