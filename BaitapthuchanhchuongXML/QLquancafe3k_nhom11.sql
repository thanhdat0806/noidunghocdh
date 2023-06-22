/*
													Lớp: 61.CNTT2
													Tên đề tài: Quản lí quán cà phê 3K
													Tên thành viên:
													Nguyễn Thành Đạt 61130137
													Trương Quốc Huy 61133757
													Nguyễn Ngọc San 61134276
													Cao Xuân Ngọc 61134037
													Nguyễn Trọng Thành 61132690
*/
CREATE DATABASE QuanLyQuanCafe
GO

USE QuanLyQuanCafe
GO


CREATE TABLE ChucVu
(
	MaCV VARCHAR(5) PRIMARY KEY,
	TenCV NVARCHAR(50),
	SoLuong SMALLINT
)
GO 

CREATE TABLE NhanVien
(
	MaNV VARCHAR(5) PRIMARY KEY,
	MaCV VARCHAR(5) NOT NULL,
	TenNV NVARCHAR(100) NOT NULL,
	NgaySinh DATE NOT NULL,
	GioiTinh BIT NOT NULL,
	NgayVao DATE NOT NULL,
	DiaChi NVARCHAR(100) NOT NULL,
	SDT VARCHAR(15) NOT NULL,
	CONSTRAINT FK_NHANVIEN_MACV FOREIGN KEY(MACV) REFERENCES dbo.ChucVu(MaCV)
)
GO 

CREATE TABLE Ban
(
	MaBan VARCHAR(5) PRIMARY KEY,
	TenBan NVARCHAR(100) NOT NULL,
)
GO

CREATE TABLE LoaiThucUong
(
	MaLoai VARCHAR(5) PRIMARY KEY,
	TenLoai NVARCHAR(100) NOT NULL
)
GO

CREATE TABLE ThucUong
(
	MaTU VARCHAR(10) PRIMARY KEY,
	MaLoai VARCHAR(5) NOT NULL,
	TenTU NVARCHAR(100) NOT NULL,
	Gia DECIMAL NOT NULL,
	DonViTinh NVARCHAR(20) NOT NULL,
	CONSTRAINT FK_ThucUong_MaLoai FOREIGN KEY(MaLoai) REFERENCES dbo.LoaiThucUong(MaLoai)
)
GO

CREATE TABLE NhaCungCap
(
	MaNCC VARCHAR(10) PRIMARY KEY,
	TenNCC NVARCHAR(100) NOT NULL,
	DiaChi NVARCHAR(100) NOT NULL,
	SDT VARCHAR(10) NOT NULL,
	EmailNCC VARCHAR(50),
)
GO

CREATE TABLE NguyenLieu
(
	MaNL VARCHAR(10) PRIMARY KEY,
	MaNCC VARCHAR(10) NOT NULL,
	TenNL NVARCHAR(100) NOT NULL,
	SoLuong INT NOT NULL,
	DonVi NVARCHAR(10) NOT NULL,
	Gia DECIMAL NOT NULL,
	CONSTRAINT FK_NguyenLieu_MaNCC FOREIGN KEY(MaNCC) REFERENCES dbo.NhaCungCap(MaNCC)
)
GO

CREATE TABLE CongThuc
(
	MaTU VARCHAR(10),
	MaNL VARCHAR(10),
	SoLuong SMALLINT NOT NULL,
	CONSTRAINT PK_CONGTHUC PRIMARY KEY (MaTU,MaNL),
	CONSTRAINT FK_CONGTHUC_MaTU FOREIGN KEY(MaTU) REFERENCES dbo.ThucUong(MaTU),
	CONSTRAINT FK_CONGTHUC_MaNL FOREIGN KEY(MaNL) REFERENCES dbo.NguyenLieu(MaNL)
)
GO

CREATE TABLE HoaDon
(
	MaHD VARCHAR(10) PRIMARY KEY,
	MaBan VARCHAR(5) NOT NULL,
	MaNV VARCHAR(5) NOT NULL,
	NgayLap DATE NOT NULL,
	CONSTRAINT FK_HoaDon_MaBan FOREIGN KEY(MaBan) REFERENCES dbo.Ban(MaBan),
	CONSTRAINT FK_HoaDon_MaNV FOREIGN KEY(MaNV) REFERENCES dbo.NhanVien(MaNV)
)
GO

CREATE TABLE CT_HoaDon
(
	MaHD VARCHAR(10),
	MaTU VARCHAR(10),
	SOLUONG SMALLINT,
	CONSTRAINT PK_CT_HoaDon PRIMARY KEY (MaTU, MaHD),
	CONSTRAINT FK_CT_HoaDon_MaTU FOREIGN KEY(MaTU) REFERENCES dbo.ThucUong(MaTU),
	CONSTRAINT FK_CT_HoaDon_MaHD FOREIGN KEY(MaHD) REFERENCES dbo.HoaDon(MaHD)
)
GO

CREATE TABLE PhieuNhap
(
	MaPN VARCHAR(10) PRIMARY KEY ,
	NgayNhapHang DATE NOT NULL,
	MaNV VARCHAR(5) NOT NULL,
	CONSTRAINT FK_PhieuNhap_MaNV FOREIGN KEY(MaNV) REFERENCES dbo.NhanVien(MaNV)
)
GO

CREATE TABLE CT_PhieuNhap
(
	MaPN VARCHAR(10),
	MaNL VARCHAR(10),
	SoluongNL SMALLINT NOT NULL,
	CONSTRAINT PK_CT_PhieuNhap PRIMARY KEY (MaPN,MaNL),
	CONSTRAINT FK_CT_PhieuNhap_MaNL FOREIGN KEY(MaNL) REFERENCES dbo.NguyenLieu(MaNL),
	CONSTRAINT FK_CT_PhieuNhap_MaPN FOREIGN KEY(MaPN) REFERENCES dbo.PhieuNhap(MaPN)
)
GO

INSERT INTO dbo.ChucVu
VALUES  ( 'CV001',N'Pha chế', 2),
		( 'CV002',N'Phục vụ', 2),	
		( 'CV003',N'Tiếp thị', 1),
		( 'CV004',N'Quản lý', 1)
GO

INSERT INTO dbo.NhanVien
VALUES  ( 'NV001', 'CV001', N'Trương Quốc Huy', '2000/06/28', 1, '2021/02/22', N'05 Sao Biển, Nha Trang', '0123456789'),
		( 'NV002', 'CV001', N'Cao Xuân Ngọc', '2001/11/04', 1, '2021/03/29', N'12 Bắc Sơn, Nha Trang', '0129999999'),
		( 'NV003', 'CV002', N'Nguyễn Thành Sang', '2001/06/22', 1, '2021/04/15', N'135 Đường A2, Nha Trang', '0321888888'),
		( 'NV004', 'CV002', N'Nguyễn Trọng Thành', '2001/04/25', 1, '2021/01/10', N'Số 9 Hoàng Hoa Thám, Vĩnh Phúc', '0385444444'),
		( 'NV005', 'CV003', N'Trần Tuyết Hằng', '1999/02/23', 0, '2021/03/29', N'Số 7 Sinh Trung, Nha Trang', '0379533333'),
		( 'NV006', 'CV004', N'Nguyễn Thành Đạt', '2001/06/08' , 1, '2021/04/29', N'Số 39 Nguyễn Thị Minh Khai, Nha Trang', '0523666666')
GO

INSERT INTO dbo.Ban
VALUES  ('B001', N'Bàn số 1'),
		('B002', N'Bàn số 2'),
		('B003', N'Bàn số 3'),
		('B004', N'Bàn số 4'),
		('B005', N'Bàn số 5'),
		('B006', N'Bàn số 6')
GO

INSERT INTO dbo.LoaiThucUong
VALUES  ( 'MTU01',N'CaFe'),
		( 'MTU02',N'Sữa'),
		( 'MTU03',N'Nước ép'),
		( 'MTU04',N'Nước ngọt')
GO

INSERT INTO dbo.ThucUong
VALUES  ( 'TU001', 'MTU01',N'CaFe Sữa',14000,N'Ly'),
		( 'TU002', 'MTU01',N'CaFe Đen',18000,N'Ly'),
		( 'TU003', 'MTU02',N'Sữa Nóng',12000,N'Ly'),
		( 'TU004', 'MTU02',N'Sữa Chanh Đá',20000,N'Ly'),
		( 'TU005', 'MTU03',N'Nước ép dâu',25000,N'Ly'),
		( 'TU006', 'MTU03',N'Nước ép cam',25000,N'Ly'),
		( 'TU007', 'MTU04',N'Number',12000,N'Chai'),
		( 'TU008', 'MTU04',N'Sting',15000,N'Chai'),
		( 'TU009', 'MTU04',N'Trà ông lông',15000,N'Chai')
GO

INSERT INTO dbo.NhaCungCap 
VALUES	('NCC01' ,N'Cafe Trung Nguyên' ,N'12B đường Bến Chợ , Nha Trang, Khánh Hòa' ,'0392563689' ,'trungnguyen_cf@gmail.com'),
		('NCC02' ,N'Nguyên Hà 1' ,N'17 Bình Giã, Vĩnh Phúc' ,'0392594516' ,'nguyenha7662@gmail.com'),
		('NCC03' ,N'Phú An' ,N'Lô 154, Đường A2, Hà Nội' ,'0392554678' ,'ctyphuan@gmail.com'),
		('NCC04' ,N'Thiên Thanh' ,N'12B đường Bến Tre , Long An' ,'0392521345' ,'thienthanh6332@gmail.com'),
		('NCC05' ,N'Hải Hà' ,N'12A Phước Đồng , Hòa Hiệp' ,'0392597846' ,'haihactt@gmail.com')
GO

INSERT INTO dbo.NguyenLieu
        ( MaNL, MaNCC, TenNL, SoLuong, DonVi, Gia )
VALUES  ( 'NL001', 'NCC01', N'Cafe bột', 10000, N'Gram', 200),
		( 'NL002', 'NCC01', N'Cafe bột cao cấp', 10000, N'Gram', 500),
		( 'NL003', 'NCC01', N'Cafe nguyên hạt', 5000, N'Gram', 700),
		( 'NL004', 'NCC02', N'Mật ong', 10000, N'ml', 250),
		( 'NL005', 'NCC02', N'Dâu', 10000, N'Gram', 250),
		( 'NL006', 'NCC02', N'Cam', 50000, N'Gram', 400),
		( 'NL007', 'NCC03', N'Number', 600, N'Chai', 10000),
		( 'NL008', 'NCC03', N'Sữa bột', 10000, N'Gram', 200),
		( 'NL009', 'NCC03', N'Sting', 500, N'Chai', 12000),
		( 'NL010', 'NCC04', N'Trà ô lông', 700, N'Chai', 12000),
		( 'NL011', 'NCC04', N'Sữa đặc', 10000, N'ml', 100),
		( 'NL012', 'NCC04', N'Sữa tươi', 10000, N'ml', 150)
GO

INSERT INTO dbo.CongThuc
        ( MaTU, MaNL, SoLuong)
VALUES  ( 'TU001', 'NL001', 40),
		( 'TU001', 'NL012', 20),
		( 'TU002', 'NL001', 50),
		( 'TU003', 'NL008', 40),
		( 'TU004', 'NL011', 60),
		( 'TU004', 'NL012', 20),
		( 'TU005', 'NL005', 40),
		( 'TU005', 'NL012', 20),
		( 'TU006', 'NL006', 40),
		( 'TU006', 'NL012', 20),
		( 'TU007', 'NL007', 1),
		( 'TU008', 'NL009', 1),
		( 'TU009', 'NL010', 1)
GO

INSERT INTO dbo.HoaDon
        ( MaHD, MaBan, MaNV, NgayLap)
VALUES  ( 'HD001','B001','NV003','2021/11/11'),
		( 'HD002','B002','NV005','2021/11/11'),
		( 'HD003','B003','NV004','2021/11/12'),
		( 'HD004','B004','NV003','2021/11/12'),
		( 'HD005','B001','NV003','2021/11/13'),
		( 'HD006','B002','NV004','2021/11/13')
Go

INSERT INTO dbo.CT_HoaDon
        ( MaHD, MaTU, SOLUONG )
VALUES  ( 'HD001','TU002',1),
		( 'HD001','TU001',2),
		( 'HD001','TU005',3),
		( 'HD002','TU002',1),
		( 'HD002','TU003',1),
		( 'HD002','TU006',2),
		( 'HD003','TU001',3),
		( 'HD003','TU004',1),
		( 'HD003','TU005',1),
		( 'HD004','TU007',2),
		( 'HD004','TU008',3),
		( 'HD004','TU009',4),
		( 'HD005','TU002',1),
		( 'HD005','TU003',2),
		( 'HD006','TU001',3),
		( 'HD006','TU005',2),
		( 'HD006','TU006',1)
GO

INSERT INTO dbo.PhieuNhap
        ( MaPN, NgayNhapHang, MaNV )
VALUES  ( 'PN001', '2021/08/12', 'NV006'),
		( 'PN002', '2021/08/13', 'NV006'),
		( 'PN003', '2021/07/14', 'NV006'),
		( 'PN004', '2021/07/15', 'NV006'),
		( 'PN005', '2021/06/16', 'NV006'),
		( 'PN006', '2021/06/17', 'NV006')

GO

INSERT INTO dbo.CT_PhieuNhap
        ( MaPN, MaNL, SoluongNL )
VALUES  ( 'PN001','NL001',5000 ),
		( 'PN001','NL002',1000 ),
		( 'PN002','NL001',1000 ),
		( 'PN002','NL003',2000 ),
		( 'PN003','NL004',3000 ),
		( 'PN003','NL005',4000 ),
		( 'PN004','NL006',1000 ),
		( 'PN004','NL007',2000 ),
		( 'PN005','NL008',3000 ),
		( 'PN005','NL001',4000 ),
		( 'PN006','NL002',5000 )
GO



-----------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------
						/* Truy vấn đơn giản*/
-------------------------------------------------------------------------------------------

--Câu 1: Cho biết mã, tên, sđt của các nhân viên sắp theo thứ tự A-Z của tên khách hàng.*/
SELECT MaNV, TenNV, SDT
FROM dbo.NhanVien
ORDER BY TenNV

--Câu 2: Cho biết chức vụ của nhân viên có tên là 'Huy'
SELECT NV.TenNV, CV.TenCV
FROM dbo.NhanVien NV JOIN dbo.ChucVu CV ON CV.MaCV = NV.MaCV
WHERE NV.TenNV LIKE N'%Huy'

--Câu 3: Cho biết tên, giá những thức uống thuộc loại thức uống 'Sữa'
SELECT TU.TenTU , TU.Gia
FROM dbo.ThucUong TU JOIN dbo.LoaiThucUong LTU ON LTU.MaLoai = TU.MaLoai
WHERE LTU.TenLoai = N'Sữa'
--


-----------------------------------------------------------------------------------------------------------------
						/* Truy vấn nâng cao*/
-----------------------------------------------------------------------------------------------------

--Câu 1: Có bao nhiêu nhân viên
SELECT COUNT(MaNV) AS N'Số lượng nhân viên'
FROM dbo.NhanVien

--Câu 2: Có bao nhiêu thức uống thuộc loại thức uống 'Nước ép'
SELECT COUNT(MaTU) AS N'Số lượng Nước ép'
FROM dbo.ThucUong TU JOIN dbo.LoaiThucUong LTU ON LTU.MaLoai = TU.MaLoai
WHERE LTU.TenLoai = N'Nước ép'

--Câu 3: Cho biết tên tất cả các nguyên liệu, đơn giá nguyên liệu, và nguyên liệu có thể tạo bao nhiêu công thức thức uống
SELECT NL.TenNL, NL.Gia, COUNT(*) AS N'Số lượng công thức'
FROM dbo.NguyenLieu NL JOIN dbo.CongThuc CT ON CT.MaNL = NL.MaNL
					   JOIN dbo.ThucUong ON ThucUong.MaTU = CT.MaTU
GROUP BY NL.TenNL, NL.Gia

--Câu 4: Có bao nhiêu hóa đơn được lập vào tháng 11 băm 2021
SELECT COUNT(*) AS N'SLHD vào 11/2021'
FROM dbo.HoaDon
WHERE MONTH(NgayLap) = 11 AND YEAR(NgayLap) = 2021

--Câu 5. Cho biết tên nhà cung cấp, số lượng nguyên liệu mà nhà cung cấp đó đã cung cấp
SELECT NCC.TenNCC, COUNT(*) AS N'SL Nguyên liệu'
FROM dbo.NhaCungCap NCC JOIN dbo.NguyenLieu NL ON NL.MaNCC = NCC.MaNCC
GROUP BY NCC.TENNCC

--Câu 6: Cho biết số hóa đơn mà từng nhân viên đã lập (gồm mã NV, tên NV, số lượng hóa đơn).*/
SELECT NV.MaNV, NV.TenNV, COUNT(*) AS N'SL Hóa đơn'
FROM dbo.HoaDon HD JOIN dbo.NhanVien NV ON NV.MaNV = HD.MaNV
GROUP BY NV.MaNV, NV.TenNV

--Câu 7: Cho biết Thông tin những nhân viên lập ít nhất 1 phiếu nhập 
SELECT NV.MaNV, NV.TenNV, NV.SDT, COUNT(*) AS N'SL Phiếu nhập'
FROM dbo.NhanVien NV JOIN dbo.PhieuNhap PN ON PN.MaNV = NV.MaNV
GROUP BY NV.MaNV, NV.TenNV, NV.SDT
HAVING COUNT(*) >=1

---------------------------------------------------------------------------------------
						/* Truy vấn với mệnh đề HAVING*/
---------------------------------------------------------------------------------------

--Câu 1: Cho biết tên những chức vụ chỉ có đúng một nhân viên.*/
SELECT CV.TenCV, COUNT(*) AS N'SL Nhân viên'
FROM dbo.ChucVu CV JOIN dbo.NhanVien NV ON NV.MaCV = CV.MaCV
GROUP BY CV.TeNCV
HAVING COUNT(*) = 1

--Câu 2: Cho biết mã, tên của các thức uống có tổng giá nguyên liệu  >= 15000.
SELECT CT.MaTU,TU.TenTU, SUM(CT.SoLuong*NL.Gia) AS 'GIÁ GỐC'
FROM dbo.ThucUong TU JOIN dbo.CongThuc CT ON CT.MaTU = TU.MaTU
					 JOIN dbo.NguyenLieu NL ON NL.MaNL = CT.MaNL 
GROUP BY CT.MaTU, TU.TenTU
HAVING SUM(CT.SoLuong*NL.Gia) >= 15000

--Câu 3: Cho biết thông tin thức uống bán chạy nhất
SELECT *
FROM dbo.ThucUong
WHERE MaTU IN ( SELECT MaTU
				FROM dbo.CT_HoaDon
				GROUP BY MaTU
				HAVING COUNT(*) >= ALL ( SELECT COUNT(*)
										 FROM dbo.CT_HoaDon
										 GROUP BY MaTU
				)

)

--Câu 4: Cho biết những nhà cung cấp cung cấp nhiều hơn 2 loại nguyên liệu.*/
SELECT NHACC.MaNCC, NHACC.TenNCC, COUNT(NL.MaNL) AS 'SL NGUYEN LIEU'
FROM dbo.NhaCungCap NHACC JOIN dbo.NguyenLieu NL ON NL.MaNCC = NhaCC.MaNCC
GROUP BY NHACC.MaNCC, NHACC.TenNCC
HAVING	COUNT(NL.MaNL) > 2

--Câu 5: In ra các hóa đơn có tổng tiền >= 100000.
SELECT HD.MaHD, SUM(CT.SOLUONG*TU.Gia) AS N'TỔNG TIỀN'
FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CT ON CT.MaHD = HD.MaHD JOIN dbo.ThucUong TU ON TU.MaTU = CT.MaTU 
GROUP BY HD.MaHD
HAVING SUM(CT.SOLUONG*TU.Gia) > 100000

---------------------------------------------------------------------------------------------------------
						/* Truy vấn với MAX, MIN*/
---------------------------------------------------------------------------------------------------------
--Câu 1: Cho biết nhân viên có doanh thu cao nhất
SELECT NV.MaNV, NV.TenNV, SUM(T1.[TỔNG TIỀN]) AS 'Tổng doanh thu'
FROM NHANVIEN NV JOIN (SELECT HD.MaNV, SUM(CT.SOLUONG*TU.Gia) AS 'TỔNG TIỀN'
						FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CT ON CT.MaHD = HD.MaHD 
										   JOIN dbo.ThucUong TU ON TU.MaTU = CT.MaTU 
						GROUP BY HD.MaHD, HD.MaNV) T1 ON T1.MaNV = NV.MaNV
GROUP BY NV.MaNV, NV.TenNV
HAVING SUM(T1.[TỔNG TIỀN]) >= ALL (SELECT SUM(T1.[TỔNG TIỀN])
									FROM NHANVIEN NV JOIN (SELECT HD.MaNV, SUM(CT.SOLUONG*TU.Gia) AS 'TỔNG TIỀN'
														   FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CT ON CT.MaHD = HD.MaHD 
																			  JOIN dbo.ThucUong TU ON TU.MaTU = CT.MaTU 
														   GROUP BY HD.MaHD, HD.MaNV) T1 ON T1.MaNV = NV.MaNV
									GROUP BY NV.MaNV 						
)
 
--Câu 2: Cho biết thức uống có lãi suất cao nhất
SELECT TU.MaTU, TU.TenTU,(TU.Gia - T1.[GIÁ GỐC] ) AS 'Lãi suất'
FROM dbo.ThucUong TU JOIN ( SELECT CT.MaTU, SUM(CT.SoLuong*NL.Gia) AS 'GIÁ GỐC'
							FROM dbo.ThucUong TU JOIN dbo.CongThuc CT ON CT.MaTU = TU.MaTU
												 JOIN dbo.NguyenLieu NL ON NL.MaNL = CT.MaNL 
							GROUP BY CT.MaTU) T1 ON T1.MaTU = TU.MaTU
WHERE (TU.Gia - T1.[GIÁ GỐC] ) >= ALL ( SELECT (TU.Gia - T1.[GIÁ GỐC] )
										FROM dbo.ThucUong TU JOIN ( SELECT CT.MaTU, SUM(CT.SoLuong*NL.Gia) AS 'GIÁ GỐC'
																	FROM dbo.ThucUong TU JOIN dbo.CongThuc CT ON CT.MaTU = TU.MaTU
																						 JOIN dbo.NguyenLieu NL ON NL.MaNL = CT.MaNL 
										GROUP BY CT.MaTU) T1 ON T1.MaTU = TU.MaTU
)

--Câu 3: Cho biết tháng có tổng số tiền nhập nguyên liệu nhỏ nhất.
SELECT MONTH(PN.NgayNhapHang) AS 'Tháng nhập', SUM(T1.[TongTien]) AS 'Tổng tiền nhập'
FROM dbo.PhieuNhap PN JOIN (SELECT CTPN.MaPN,  SUM(CTPN.SoluongNL * NL.Gia) AS 'TongTien'
						    FROM dbo.CT_PhieuNhap CTPN JOIN dbo.NguyenLieu NL ON NL.MaNL = CTPN.MaNL
						    GROUP BY CTPN.MaPN) T1 ON T1.MaPN = PN.MaPN
GROUP BY MONTH(PN.NgayNhapHang)
HAVING SUM(T1.[TongTien]) <= ALL ( SELECT  SUM(T1.[TongTien])
								   FROM dbo.PhieuNhap PN JOIN (SELECT CTPN.MaPN,  SUM(CTPN.SoluongNL * NL.Gia) AS 'TongTien'
																FROM dbo.CT_PhieuNhap CTPN JOIN dbo.NguyenLieu NL ON NL.MaNL = CTPN.MaNL
																GROUP BY CTPN.MaPN) T1 ON T1.MaPN = PN.MaPN
									GROUP BY MONTH(PN.NgayNhapHang)
)



--------------------------------------------------------------------------------------------------------
						/* Truy vấn với mệnh đề NOT IN, LEFT JOIN, RIGHT JOIN*/
--------------------------------------------------------------------------------------------------------
-- Câu 1: Cho biết tên những nhà cung cấp không tham gia nhập hàng vào năm 2021.
SELECT DISTINCT NCC.TenNCC
FROM dbo.NguyenLieu NL JOIN dbo.NhaCungCap NCC ON NCC.MaNCC = NL.MaNCC
WHERE NL.MaNL NOT IN (SELECT DISTINCT MaNL
					  FROM dbo.CT_PhieuNhap
					  WHERE MaPN IN (SELECT MaPN 
			                        FROM dbo.PhieuNhap
			                        WHERE YEAR(NgayNhapHang) = 2021
									)
)
--Câu 2: Cho biết những chức vụ không có nhân viên làm.
SELECT MaCV, TenCV
FROM dbo.ChucVu
WHERE MaCV NOT IN (SELECT DISTINCT MaCV
				   FROM dbo.NhanVien
)

--Câu 3: Cho biết tên các loại thức uống chưa được bán vào tháng 11.
SELECT TenTU
FROM dbo.ThucUong
WHERE MaTU NOT IN (	SELECT DISTINCT CTHD.MaTU
					FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CTHD ON CTHD.MaHD = HD.MaHD
					WHERE MONTH(HD.NgayLap) = 11
)

--Câu 4: Cho biết những nhân viên chưa lập bất kì hóa đơn nào
SELECT MaNV, TenNV
FROM dbo.NhanVien
WHERE MaNV NOT IN (	SELECT MaNV
					FROM dbo.HoaDon
)

--Câu 5: Cho biết thông tin những nguyên liệu chưa được sử dụng để làm thức uống
SELECT *
FROM dbo.NguyenLieu
WHERE MaNL NOT IN ( SELECT DISTINCT MaNL
					FROM dbo.CongThuc
)

--Câu 6:Cho biết thông tin những nguyên liệu chưa được nhập vào tháng 08/2021
SELECT MaNL, TenNL
FROM dbo.NguyenLieu
WHERE MaNL NOT IN (SELECT CTPN.MaNL
					FROM PhieuNhap PN JOIN dbo.CT_PhieuNhap CTPN ON CTPN.MaPN = PN.MaPN
					WHERE MONTH(PN.NgayNhapHang) = 8 AND YEAR(PN.NgayNhapHang) = 2021
)


--Câu 7:Cho biết thông tin những nhân viên không tham gia nhập nguyên liệu
SELECT MaNV, TenNV
FROM dbo.NhanVien
WHERE MaNV NOT IN ( SELECT MaNV
					FROM dbo.PhieuNhap
)

/*---3 câu truy vấn hợp/giao/trừ---*/
--Câu 1: Cho biết thông tin những nhân viên có chức vụ là Pha chế hoặc phục vụ
SELECT NV.MaNV, NV.TenNV, CV.TenCV
FROM dbo.ChucVu CV JOIN dbo.NhanVien NV ON NV.MaCV = CV.MaCV
WHERE CV.TenCV = N'Pha chế'

UNION

SELECT NV.MaNV, NV.TenNV, CV.TenCV
FROM dbo.ChucVu CV JOIN dbo.NhanVien NV ON NV.MaCV = CV.MaCV
WHERE CV.TenCV = N'Phục vụ'

--Câu 2: Cho biết thông tin những hóa đơn có CaFe sữa và Sữa nóng
SELECT HD.MaHD, HD.MaBan, HD.NgayLap
FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CTHD ON CTHD.MaHD = HD.MaHD
					JOIN dbo.ThucUong TU ON TU.MaTU = CTHD.MaTU
WHERE TU.TenTU = N'CaFe đen'

INTERSECT

SELECT HD.MaHD, HD.MaBan, HD.NgayLap
FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CTHD ON CTHD.MaHD = HD.MaHD
					JOIN dbo.ThucUong TU ON TU.MaTU = CTHD.MaTU
WHERE TU.TenTU = N'Sữa nóng'

--Câu 3: Cho biết thông tin loại thức uống có giá < 20000
SELECT TenTU, Gia
FROM dbo.ThucUong

EXCEPT

SELECT TenTU, Gia
FROM dbo.ThucUong
WHERE Gia >= 20000

---------------------------------------------------------------------------------------------------
						/* Truy vấn với mệnh đề UPDAETE, DELETE*/
---------------------------------------------------------------- -----------------------------------
--Câu 1: Giảm 10% giá các thức uống không bán được trong tháng 11/2021 
UPDATE dbo.ThucUong
SET Gia = Gia*0.9
WHERE MaTU NOT IN (SELECT DISTINCT CTHD.MaTU
				   FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CTHD ON CTHD.MaHD = HD.MaHD
				   WHERE MONTH(HD.NgayLap) = 11 AND YEAR(HD.NgayLap) = 2021

)
--Câu 2: Tăng thêm 30% cho thức uống bán chạy nhất
UPDATE dbo.ThucUong
SET Gia = Gia*1.3
WHERE MaTU IN (SELECT MaTU
				FROM dbo.CT_HoaDon
				GROUP BY MaTU
				HAVING COUNT(*) >= ALL ( SELECT COUNT(*)
										 FROM dbo.CT_HoaDon
										 GROUP BY MaTU
				)

)

--Câu 3: Sửa hóa đơn có mã hóa đơn là HD002 có mã nhân viên lập là NV003
UPDATE dbo.HoaDon
SET MaNV = 'NV003'
WHERE MaHD = 'HD002'

--Câu 4: Cập nhật giá của loại thức uống là Nước ngọt tăng thêm 2000
UPDATE dbo.ThucUong
SET Gia = Gia + 2000
WHERE MaTU IN (SELECT TU.MaTU 
			   FROM dbo.ThucUong TU JOIN dbo.LoaiThucUong LTU ON LTU.MaLoai = TU.MaLoai
			   WHERE LTU.TenLoai = N'Nước ngọt'
)

--Câu 5: Xóa những hóa đơn do nhân viên Nguyễn Văn Nam lập
DELETE FROM dbo.HoaDon
WHERE MaNV IN ( SELECT MaNV
				FROM dbo.NhanVien
				WHERE TenNV = N'Nguyễn Văn Nam'
)
-- Câu 6: Xóa nhân viên có tên là  Cao Xuân Ngọc
DELETE FROM dbo.NhanVien
WHERE TenNV = N'Cao Xuân Ngọc'

-- Câu 7: Xóa những thức uống có giá <10000
DELETE FROM dbo.ThucUong
WHERE Gia < 10000
----------------------------------------------------------------
						/* Tạo THỦ TỤC LƯU TRỮ*/
----------------------------------------------------------------

--Câu1: Viết thủ tục liệt kê tên các nguyên liệu của một nhà cung cấp bất kì, với tham số đầu vào là tên nhà cung cấp, 
--      kiểm tra ràng buộc tồn tại tên nhà cung cấp.

CREATE PROC LIETKE_NGUYENLIEU_NCC
	@TENNCC NVARCHAR(100)
AS
BEGIN
	IF EXISTS (SELECT *FROM NHACUNGCAP WHERE TENNCC LIKE @TENNCC)
	BEGIN
		SELECT MaNL, TenNL
		FROM dbo.NguyenLieu
		WHERE MaNCC = (SELECT MaNCC FROM dbo.NhaCungCap WHERE TenNCC LIKE @TENNCC)
	END
	ELSE PRINT N'lỗi! không tồn tại tên nhà cung cấp này'
END

EXEC dbo.LIETKE_NGUYENLIEU_NCC @TENNCC = N'Cafe Trung Nguyên' -- nvarchar(100)
GO

--Câu 2: Hãy viết thủ tục thêm một nhân viên vào bảng NHANVIEN với tham số truyền vào là mã nhân viên, 
--      tên nhân viên, mã chức vụ giớitính, ngày sinh, số điện thoại, ngày vào, địa chỉ. 
--      Kiểm tra độ tuổi của nhân viên phải lớn hơn 18*/

CREATE PROC THEM_NHANVIEN
	@MANV VARCHAR(5),
	@MACV VARCHAR(5),
	@TEN NVARCHAR(100),
	@NGSINH DATE,
	@GIOITINH BIT,
	@NGAYLV DATE,
	@DIACHI NVARCHAR(100),
	@DT VARCHAR(15) 
AS
BEGIN
	IF EXISTS(SELECT * FROM dbo.ChucVu WHERE MaCV = @MACV) --KIỂM TRA CHỨC VỤ CÓ HỢP LỆ HAY KHÔNG--
	BEGIN
		IF NOT EXISTS(SELECT * FROM dbo.NhanVien WHERE MaNV = @MANV) --KIỂM TRA TRÙNG--
		BEGIN
			IF DATEDIFF(YEAR,@NGSINH,GETDATE()) > 18
			BEGIN
				INSERT INTO dbo.NhanVien
				VALUES  ( @MANV , -- MaNV - varchar(5)
				          @MACV , -- MaCV - varchar(5)
				          @TEN , -- TenNV - nvarchar(100)
				          @NGSINH , -- NgaySinh - date
				          @GIOITINH , -- GioiTinh - bit
				          @NGAYLV , -- NgayVao - date
				          @DIACHI , -- DiaChi - nvarchar(100)
				          @DT  -- SDT - varchar(15)
				        )
			END
			ELSE PRINT N'CHƯA ĐỦ TUỔI!'
		END
		ELSE PRINT N'TRÙNG DỮ LIỆU'
	END
	ELSE PRINT N'CHƯA CÓ CHỨC VỤ NÀY!'
END

EXEC dbo.THEM_NHANVIEN @MANV = 'NV007', -- varchar(5)
    @MACV = 'CV002', -- varchar(5)
    @TEN = N'Nguyễn Văn Dũng', -- nvarchar(100)
    @NGSINH = '2000-10-15', -- date
    @GIOITINH = 1, -- bit
    @NGAYLV = '2021-12-06', -- date
    @DIACHI = N'SỐ 2 NGUYỄN ĐÌNH CHIỂU', -- nvarchar(100)
    @DT = '0336698888' -- varchar(15)

SELECT* FROM dbo.NhanVien
GO

--Câu 3: Viết thủ tục liệt kê thông tin tất cả các nguyên liệu (tên nguyên liệu, số lượng tồn kho, đơn vị) 
--       của một thức uống bất kì, với tham số truyền vào là tên thức uống. Kiểm tra ràng buộc tồn tại tên thức uống.*/

CREATE PROC LIETKE_NGUYENLIEU
	@TENTU NVARCHAR(100)
AS
BEGIN
	IF exists (select * from THUCUONG where TENTU LIKE @TENTU)
	BEGIN
		SELECT THUCUONG.TENTU AS 'Thức Uống',NGUYENLIEU.TENNL AS 'Nguyên liệu',NGUYENLIEU.SOLUONG as 'Số Lượng',NGUYENLIEU.DONVI AS 'Đơn vị'
		FROM THUCUONG INNER JOIN CONGTHUC ON THUCUONG.MATU = CONGTHUC.MATU INNER JOIN NGUYENLIEU ON CONGTHUC.MANL = NGUYENLIEU.MANL
		WHERE THUCUONG.TENTU=@TENTU
	END
	ELSE PRINT N'Lỗi không tồn tại tên thức uống này'
END

EXEC dbo.LIETKE_NGUYENLIEU @TENTU = N'CaFe Sữa' -- nvarchar(100)
GO 

-- Câu 4: Viết thủ tục in ra tổng tiền (đã  qua giảm giá) của một hóa đơn bất kì vơi 
--        tham số truyền vào là mã hóa đơn. Tỷ lệ giảm giá là 10% với điều kiện mã hóa đơn tồn tại phải và tổng tiền lớn hơn 100000*/

CREATE PROC TINHTIEN
	@MAHD VARCHAR(10)
AS
BEGIN
	IF EXISTS(SELECT * FROM dbo.HoaDon WHERE MaHD =  @MAHD)
	BEGIN
		DECLARE @tongtien DECIMAL
		SET @tongtien = (
						SELECT SUM(CT.SOLUONG*TU.Gia)
						FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CT ON CT.MaHD = HD.MaHD JOIN dbo.ThucUong TU ON TU.MaTU = CT.MaTU 
						GROUP BY HD.MaHD
						HAVING HD.MaHD = @MAHD
						)
		IF @tongtien >= 100000 
		BEGIN
			SET @tongtien = @tongtien*0.9
		END
		SELECT @tongtien AS N'tổng tiền'
	END
	ELSE PRINT N'Không tồn tại hóa đơn này!'
END

EXEC TINHTIEN @MAHD = 'HD001' -- varchar(10)
GO

--Câu 5. Viết thủ tục tìm thức uống bán chạy nhất trong khoảng thời gian bất kì, với tham số truyền vào là thời gian bắt đầu và thời gian kết thúc.
--        Điều kiện thời gian bắt đầu trước thời gian kết thúc.*/

CREATE PROC BANCHAYNHAT
	@TG1 DATE,
	@TG2 DATE
AS
BEGIN
	IF(@TG1 <= @TG2)
	BEGIN
		SELECT TU.MaTU, TU.TenTU, SUM(CT.SOLUONG) AS N'SL bán'
		FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CT ON CT.MaHD = HD.MaHD JOIN dbo.ThucUong TU ON TU.MaTU = CT.MaTU
		WHERE HD.NgayLap<=@TG2 AND HD.NgayLap>=@TG1
		GROUP BY TU.MaTU, TU.TenTU, HD.NgayLap
		HAVING SUM(CT.SOLUONG) >= ALL
									(
										SELECT SUM(CT.SOLUONG)
										FROM dbo.HoaDon HD JOIN dbo.CT_HoaDon CT ON CT.MaHD = HD.MaHD JOIN dbo.ThucUong TU ON TU.MaTU = CT.MaTU
										WHERE HD.NgayLap<=@TG2 AND HD.NgayLap>=@TG1
										GROUP BY TU.MaTU, TU.TenTU, HD.NgayLap	
									)
	END
END

EXEC dbo.BANCHAYNHAT @TG1 = '2021-11-11', -- date
    @TG2 = '2021-11-13' -- date

----------------------------------------------------------------
/* TRIGGER*/
----------------------------------------------------------------
/*IF EXISTS (SELECT NAME FROM SYSOBJECTS WHERE NAME='' AND TYPE='TR')
DROP TRIGGER*/

/*Viết Trigge cho lệnh Insert vào bảng CHITIET_HOADON. Khi thêm chi tiết hóa đơn thì kiểm tra nhập số lượng có âm không, thông
báo không đủ nguyên liệu nếu hết và phải giảm số lượng tồn của nguyên liệu nếu thỏa các điêu kiện còn lại.
*/

IF EXISTS (SELECT NAME FROM SYSOBJECTS WHERE NAME='TR_THEMHOADON' AND TYPE='TR')
DROP TRIGGER TR_THEMHOADON

CREATE TRIGGER TR_THEMHOADON ON dbo.CT_HoaDon FOR INSERT
AS
BEGIN
	DECLARE @matu char(10);
	DECLARE @mahd char(10);
	DECLARE @SL float;
	DECLARE @D int;
	DECLARE @trungma int;

	SELECT @matu=MATU FROM inserted;
	SELECT @mahd=MAHD FROM inserted;
	SELECT @trungma= COUNT(*) from CT_HOADON WHERE MAHD=@mahd AND MATU=@matu;
	SELECT @SL= INSERTED.SOLUONG FROM INSERTED

	IF(@trungma>1)
	BEGIN
		PRINT N'Mã bị trùng!';
		ROLLBACK TRAN
		RETURN 
	END
	ELSE
	BEGIN
		IF(@SL < 0)
		BEGIN
			PRINT N'Lỗi: Không được nhập số lượng âm'
			ROLLBACK TRAN
			RETURN
		END
		ELSE
		BEGIN
			SELECT @D = COUNT( * ) FROM NGUYENLIEU NL JOIN CONGTHUC CT ON NL.MANL = CT.MANL JOIN THUCUONG TU 
			ON TU.MATU = CT.MATU JOIN inserted CTHD on CTHD.MATU = TU.MATU
			WHERE NL.SOLUONG - (CT.SOLUONG*@SL) < 0;
			IF (@D > 0 )
			BEGIN
				PRINT N'Không đủ nguyên liệu!'
			END
			ELSE
			BEGIN
				INSERT INTO CT_HOADON VALUES (@mahd,@matu,@SL);
				UPDATE NL SET NL.SOLUONG = NL.SOLUONG -(CT.SOLUONG*@SL)
				FROM NGUYENLIEU NL INNER JOIN CONGTHUC CT ON NL.MANL = CT.MANL INNER JOIN THUCUONG TU on TU.MATU = CT.MATU
				INNER JOIN inserted CTHD ON CTHD.MATU = TU.MATU
			END
		END
	END
END
GO

/* Viết Trigger kiểm tra cho lệnh Update vào bảng CHITIET_PHIEUNHAP. Khi sửa số lượng nguyên liệu trong chi tiết phiếu nhập
thì: không được sửa số âm, phải sửa số lượng tồn của nguyên liệu */

IF EXISTS (SELECT NAME FROM SYSOBJECTS WHERE NAME='UPDATE_CT_PHIEUNHAP' AND TYPE='TR')
DROP TRIGGER UPDATE_CT_PHIEUNHAP

CREATE TRIGGER UPDATE_CT_PHIEUNHAP ON dbo.CT_PhieuNhap
FOR UPDATE
AS
	Declare @SL float
	Declare @SL_Truoc float
	Declare @MANL char(10)
	Declare @MAPN char(10)
	SELECT @SL= INSERTED.SOLUONGNL,@MANL= INSERTED.MANL, @MAPN= inserted.MAPN FROM INSERTED
	SELECT @SL_Truoc= DELETED.SOLUONGNL FROM DELETED
	IF(@SL <=0)
	BEGIN
		PRINT N'Không được nhập số lượng âm'
		RollBack Tran
		Return
	END
	ELSE 
	BEGIN
		IF(@SL_Truoc>@SL)
		BEGIN
			UPDATE NGUYENLIEU SET NGUYENLIEU.SOLUONG = NGUYENLIEU.SOLUONG-(@SL_Truoc-@SL) 
			FROM NGUYENLIEU JOIN CT_PHIEUNHAP ON NGUYENLIEU.MANL = CT_PHIEUNHAP.MANL 
			WHERE NGUYENLIEU.MANL=@MANL AND CT_PHIEUNHAP.MAPN=@MAPN
		END
		ELSE
		BEGIN 
			IF (@SL_Truoc<@SL)
			BEGIN
				UPDATE NGUYENLIEU SET NGUYENLIEU.SOLUONG = NGUYENLIEU.SOLUONG + (@SL-@SL_Truoc) 
				FROM NGUYENLIEU JOIN CT_PHIEUNHAP ON NGUYENLIEU.MANL = CT_PHIEUNHAP.MANL
				WHERE NGUYENLIEU.MANL=@MANL AND CT_PHIEUNHAP.MAPN=@MAPN
			END
			ELSE
			BEGIN
				PRINT N'Số trước khi sửa và sao khi sửa giống nhau'
			END
		END
	END
	ROLLBACK TRAN
	RETURN 

/*Viết Trigger cho lệnh Delete của bảng NHANVIEN. Khi xóa nhân viên thì tự động xóa các bảng có liên quan */

IF EXISTS (SELECT NAME FROM SYSOBJECTS WHERE NAME='XOANHANVIEN' AND TYPE='TR')
DROP TRIGGER XOANHANVIEN

CREATE TRIGGER XOANHANVIEN ON dbo.NhanVien 
FOR DELETE
AS
BEGIN
	DECLARE @MANV VARCHAR(5)
	DECLARE @PN VARCHAR(10)
	DECLARE @HD VARCHAR(10)
	SELECT @MANV=MANV FROM Deleted;

	SELECT @PN=b.MAPN 
	FROM CT_PHIEUNHAP a JOIN PHIEUNHAP b ON a.MAPN=b.MAPN 
	WHERE b.MANV=@MANV;
	--Xóa chi tiết phiếu nhập
	DELETE FROM CT_PHIEUNHAP WHERE MAPN=@PN;
	--Xóa phiếu nhập
	DELETE FROM PHIEUNHAP WHERE MAPN=@PN;
	SELECT @HD=b.MAHD FROM CT_HOADON a JOIN HOADON b ON a.MAHD=b.MAHD WHERE b.MANV=@MANV;
	--Xóa chi tiết hóa đơn
	DELETE FROM CT_HOADON WHERE MAHD=@HD;
	--Xóa hóa đơn
	DELETE FROM HOADON WHERE MAHD=@HD;
	--Xóa nhân viên
	DELETE FROM NHANVIEN WHERE MANV=@MANV;
END


----------------------------------------------------------------
                      /*PHÂN QUYỀN NGƯỜI DÙNG*/
----------------------------------------------------------------

-- Quản lý có tất cả các quyền đối với các Bảng
CREATE LOGIN QuanLy WITH PASSWORD = '123'
ALTER LOGIN QuanLy WITH DEFAULT_DATABASE = QuanLyQuanCafe
CREATE USER QuanLyCF FOR LOGIN QuanLy

GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.ChucVu TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.NhanVien TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.Ban TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.LoaiThucUong TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.ThucUong TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.NhaCungCap TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.NguyenLieu TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.CongThuc TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.HoaDon TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.CT_HoaDon TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.PhieuNhap TO QuanLyCF
GRANT DELETE, INSERT, REFERENCES, SELECT, UPDATE ON dbo.CT_PhieuNhap TO QuanLyCF

-- Bán hàng có một số quyền ở một số bảng

CREATE LOGIN BanHang WITH PASSWORD = '123'
ALTER LOGIN BanHang WITH DEFAULT_DATABASE = QuanLyQuanCafe
CREATE USER BanHangCF FOR LOGIN BanHang

GRANT SELECT ON dbo.Ban TO BanHangCF
GRANT SELECT ON dbo.LoaiThucUong TO BanHangCF
GRANT SELECT ON dbo.NguyenLieu TO BanHangCF
GRANT SELECT ON dbo.CongThuc TO BanHangCF
GRANT SELECT, INSERT ON dbo.HoaDon TO BanHangCF
GRANT SELECT, INSERT ON dbo.CT_HoaDon TO BanHangCF

-- Kiểm kho có một số quyền ở một số bảng
CREATE LOGIN KiemKho WITH PASSWORD = '123'
ALTER LOGIN KiemKho WITH DEFAULT_DATABASE = QuanLyQuanCafe
CREATE USER KiemKhoCF FOR LOGIN KiemKho

GRANT SELECT, INSERT ON dbo.NguyenLieu TO KiemKhoCF
GRANT SELECT, INSERT ON dbo.NhaCungCap TO KiemKhoCF
GRANT SELECT, INSERT ON dbo.PhieuNhap TO KiemKhoCF
GRANT SELECT, INSERT ON dbo.CT_PhieuNhap TO KiemKhoCF

