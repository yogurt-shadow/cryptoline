Name: singular
Summary: computer algebra system for polynomial computations (binary files)
Version: 4.4.0
Release: 1%{?dist}
License: GPLv2+
Group: Applications/Math
Vendor: Singular Team
URL: https://www.singular.uni-kl.de
Packager: Mathias Schulze <mschulze@mathematik.uni-kl.de>
Source0: https://www.mathematik.uni-kl.de/ftp/pub/Math/Singular/UNIX/%{name}-%{version}.tar.gz
BuildArch: %{_arch}
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)
BuildRequires: cddlib-devel, gmp-devel, ntl-devel
Requires: singular-common

%description
Singular is a computer algebra system for polynomial computations with
emphasis on the special needs of commutative algebra, algebraic geometry,
and singularity theory.

This package contains binary files.

%package common
Summary: computer algebra system for polynomial computations (common files).
BuildArch: noarch
%description common
Singular is a computer algebra system for polynomial computations with
emphasis on the special needs of commutative algebra, algebraic geometry,
and singularity theory.

This package contains architecture-independent files.

%package devel
Summary: computer algebra system for polynomial computations (development)
BuildArch: noarch
%description devel
Singular is a computer algebra system for polynomial computations with
emphasis on the special needs of commutative algebra, algebraic geometry,
and singularity theory.

This package contains development files.

%prep
%setup -q

%check
make check

%build
%configure --enable-gfanlib
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
make install DESTDIR=%{buildroot}
install -D desktop/Singular.desktop %{buildroot}/%{_datadir}/applications/Singular.desktop
install -D desktop/Singular-manual.desktop %{buildroot}/%{_datadir}/applications/Singular-manual.desktop
install -D desktop/Singular.png %{buildroot}/%{_datadir}/icons/Singular.png

%clean
rm -rf %{buildroot}

%files
%defattr(-,root,root,-)
%{_bindir}/*
%{_libdir}/*
%{_libexecdir}/*

%files common
%doc README COPYING
%{_datadir}/*
#%{_mandir}/*
#%{_infodir}/*

%files devel
%{_includedir}/*

%changelog
* Tue Apr 30 2013 Mathias Schulze <mschulze@mathematik.uni-kl.de> 3.1.3.rc-1
- Initial release

