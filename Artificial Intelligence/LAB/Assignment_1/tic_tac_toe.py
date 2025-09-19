import streamlit as st
import numpy as np
import random
import time

def check_winner(board):
    """Check if someone won the game"""
    # Check rows
    for row in board:
        if row[0] == row[1] == row[2] != 0:
            return row[0]
    
    # Check columns
    for col in range(3):
        if board[0,col] == board[1,col] == board[2,col] != 0:
            return board[0,col]
    
    # Check diagonals
    if board[0,0] == board[1,1] == board[2,2] != 0:
        return board[0,0]
    if board[0,2] == board[1,1] == board[2,0] != 0:
        return board[0,2]
    
    return 0  # No winner

def is_board_full(board):
    """Check if board is full"""
    return not np.any(board == 0)

def get_empty_positions(board):
    """Get all empty positions on the board"""
    return list(zip(*np.where(board == 0)))

def computer_move(board):
    """Computer makes a random move"""
    empty_spots = get_empty_positions(board)
    if empty_spots:
        return random.choice(empty_spots)
    return None

# Initialize the game
if 'board' not in st.session_state:
    st.session_state.board = np.zeros((3,3), dtype=int)
    st.session_state.game_over = False
    st.session_state.winner = 0
    st.session_state.message = "Your turn! Click any cell to play."

# Page setup
st.set_page_config(page_title="Tic-Tac-Toe", page_icon="🎮")
st.title("🎮 Tic-Tac-Toe Game")
st.markdown("---")

# Game info
col1, col2 = st.columns(2)
with col1:
    st.markdown("**You:** ❌ (Cross)")
with col2:
    st.markdown("**Computer:** ⭕ (Circle)")

st.markdown("---")

# Game board
board = st.session_state.board

# Create 3x3 grid
for i in range(3):
    cols = st.columns(3)
    for j in range(3):
        with cols[j]:
            # Determine what to show in the cell
            if board[i,j] == 1:
                symbol = "❌"
            elif board[i,j] == 2:
                symbol = "⭕"
            else:
                symbol = " "
            
            # Create button for each cell
            if st.button(symbol, key=f"btn_{i}_{j}", 
                        disabled=(board[i,j] != 0 or st.session_state.game_over),
                        help=f"Row {i+1}, Column {j+1}"):
                
                # Player makes move
                if board[i,j] == 0 and not st.session_state.game_over:
                    board[i,j] = 1  # Player is 1 (❌)
                    
                    # Check if player won
                    winner = check_winner(board)
                    if winner == 1:
                        st.session_state.winner = 1
                        st.session_state.message = "🎉 You Won! Congratulations!"
                        st.session_state.game_over = True
                    elif is_board_full(board):
                        st.session_state.message = "🤝 It's a Draw! Good game!"
                        st.session_state.game_over = True
                    else:
                        # Computer's turn
                        st.session_state.message = "Computer is thinking..."
                        
                        # Small delay for better UX
                        time.sleep(0.5)
                        
                        # Computer makes move
                        comp_move = computer_move(board)
                        if comp_move:
                            board[comp_move[0], comp_move[1]] = 2  # Computer is 2 (⭕)
                            
                            # Check if computer won
                            winner = check_winner(board)
                            if winner == 2:
                                st.session_state.winner = 2
                                st.session_state.message = "🤖 Computer Won! Try again!"
                                st.session_state.game_over = True
                            elif is_board_full(board):
                                st.session_state.message = "🤝 It's a Draw! Good game!"
                                st.session_state.game_over = True
                            else:
                                st.session_state.message = "Your turn! Click any empty cell."
                    
                    st.rerun()

# Game status
st.markdown("---")
st.subheader(st.session_state.message)

# Reset button
if st.button("🔄 New Game", type="primary"):
    st.session_state.board = np.zeros((3,3), dtype=int)
    st.session_state.game_over = False
    st.session_state.winner = 0
    st.session_state.message = "Your turn! Click any cell to play."
    st.rerun()

# Game statistics (optional)
if st.session_state.game_over:
    st.markdown("---")
    if st.session_state.winner == 1:
        st.success("🏆 Victory! You beat the computer!")
    elif st.session_state.winner == 2:
        st.error("💻 Computer wins this round!")
    else:
        st.info("🤝 Draw - Nobody wins this time!")