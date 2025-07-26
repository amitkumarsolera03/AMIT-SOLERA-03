import pygame
import random
import sys

# Initialize Pygame
pygame.init()

# Screen dimensions
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption('Dodge the Falling Blocks')

# Colors
WHITE = (255, 255, 255)
RED = (255, 0, 0)
BLUE = (0, 0, 255)

# Player properties
player_width, player_height = 100, 10
player_color = BLUE
player_x = WIDTH // 2 - player_width // 2
player_y = HEIGHT - player_height - 10
player_speed = 10

# Falling block properties
block_size = 50
block_color = RED
block_speed = 5
blocks = []

# Score
score = 0
font = pygame.font.Font(None, 36)

# Game loop
clock = pygame.time.Clock()
running = True

while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Key pressed
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and player_x > 0:
        player_x -= player_speed
    if keys[pygame.K_RIGHT] and player_x < WIDTH - player_width:
        player_x += player_speed

    # Create a new block
    if random.randint(1, 20) == 1:
        block_x = random.randint(0, WIDTH - block_size)
        blocks.append([block_x, 0])

    # Move blocks and check for collision
    for block in blocks[:]:
        block[1] += block_speed
        if block[1] > HEIGHT:
            blocks.remove(block)
            score += 1
        if (player_x < block[0] + block_size and
            player_x + player_width > block[0] and
            player_y < block[1] + block_size and
            player_y + player_height > block[1]):
            pygame.quit()
            print(f"Game Over! Your score: {score}")
            sys.exit()

    # Fill the screen with white
    screen.fill(WHITE)

    # Draw the player
    pygame.draw.rect(screen, player_color, (player_x, player_y, player_width, player_height))

    # Draw the blocks
    for block in blocks:
        pygame.draw.rect(screen, block_color, (block[0], block[1], block_size, block_size))

    # Draw the score
    score_text = font.render(f'Score: {score}', True, (0, 0, 0))
    screen.blit(score_text, (10, 10))

    # Update the display
    pygame.display.flip()

    # Cap the frame rate
    clock.tick(30)
