# Maintainer: WoLfY <wolfy42@protonmail.com>
pkgname="no"
pkgver="1.0.0"
pkgrel=1
pkgdesc="Opposite of the yes because it's no"
arch=("x86_64")
url="https://github.com/karak1974/no"
license=('GPL')
source=("no.c")
md5sums=("74ada161835192d150ca63ec8bd499e8")

package() {
	mkdir -p "${pkgdir}/usr/bin"
	cd "${srcdir}"
	gcc $source -o "${pkgdir}/no"
  	sudo cp "${pkgdir}/no" "/usr/bin/no"
}