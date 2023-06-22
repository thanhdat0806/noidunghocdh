import numpy as np
from PIL import Image, ImageDraw, ImageFont
from scipy.ndimage import rotate


# Đường dẫn tới tập tin ảnh cần watermasking
img_path = "input.jpg"

# Tải ảnh lên bằng thư viện PIL
img = Image.open(img_path)

# Tạo đối tượng vẽ
draw = ImageDraw.Draw(img)

# Thiết lập thông tin watermasking
text = "Copyright@ThanhDat"
font_path = "arial.ttf"
font_size = 30
grid_size = 350
opacity = 128

# Tạo đối tượng font
font = ImageFont.truetype(font_path, font_size)

# Tính kích thước ảnh mới sau khi xoay
width, height = img.size
new_width = int(abs(width * np.cos(np.deg2rad(45))) + abs(height * np.sin(np.deg2rad(45))))
new_height = int(abs(width * np.sin(np.deg2rad(45))) + abs(height * np.cos(np.deg2rad(45))))

# Tạo ảnh mới và chép ảnh cũ vào trung tâm ảnh mới
new_img = Image.new("RGBA", (new_width, new_height), (255, 255, 255, 0))
new_img.paste(img, ((new_width - width) // 2, (new_height - height) // 2))

# Xoay ảnh mới và chuyển thành mảng numpy
arr = np.array(new_img.rotate(45, expand=True))

# Xoay grid_size cũ để tạo grid_size mới cho watermasking
new_grid_size = int(grid_size * np.sqrt(2))

# Vẽ watermasking dạng mắt cá chữ chéo lên toàn bộ ảnh
for i in range(0, arr.shape[1], new_grid_size):
    for j in range(0, arr.shape[0], new_grid_size):
        x1, y1 = i, j
        x2, y2 = i + new_grid_size, j + new_grid_size
        if (i // new_grid_size + j // new_grid_size) % 2 == 0:
            draw.text((x1, y1), text, fill=(255,255,255,opacity), font=font)
        else:
            draw.text((x2, y1), text, fill=(255,255,255,opacity), font=font)

# Lưu ảnh mới với watermasking
img.save("output.jpg")
